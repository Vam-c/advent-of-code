# get-packet-list converts a packet to list of values.
sub get-packet-list($packet) {
    my @packet = substr($packet, 1, *-1).split(",", :skip-empty);
    my @result = [];
    my $index = 0;
    loop ($index = 0; $index < @packet.elems; ) {
        my $value = @packet[$index];

        if ($value.Int || $value ~~ 0) {
            @result.push($value.Int);
            $index++;
        } else {
            # Collect till a matching closing bracket is found.
            my @substring = [];
            my $bracket-count = 0;
            while ($index < @packet.elems) {
                my $elem = @packet[$index++];

                # Update bracket-count.
                $bracket-count += $elem.indices('[').elems - $elem.indices(']').elems;

                @substring.push($elem);

                # Recursive call to get the list for substring.
                if ($bracket-count == 0) {
                    @result.push(get-packet-list(@substring.join(',')));
                    last;
                }
            }
        }
    }

    return @result;
}

# compare-lists returns an integers as follows:
# =0 : Neutral case.
# >0 : Correct Order.
# <0 : Wrong Order.
sub compare-lists(@left, @right) {
    # length-response should be returned only if response
    # is not zero till loop ends.
    my $length-response = @right.elems - @left.elems;
    my $response = 0;

    for @left Z @right -> [$left, $right] {
        # Stop comparision when response is non zero.
        last if $response != 0;

        if $left.^name eq $right.^name {
            $response = $left.^name eq "Array" ?? 
                compare-lists($left, $right) !! $right - $left;
        } else {
            # Both elements are not of the same type.
            # Convert Int type to List and compare them.
            my @new-left = Array($left.Slip);
            my @new-right = Array($right.Slip);

            $response = compare-lists(@new-left, @new-right);
        }
    };
    
    return $response == 0 ?? $length-response !! $response;
}

my @packets = '13.txt'.IO.slurp.split("\n", :skip-empty).map(&get-packet-list);
my @sorted_pack = @packets.append(([[[2],], [[6],]])).sort(&compare-lists).reverse;

# There is a false match with another [[2]] somewhere. Can be fixed by stringifying and searching I guess.
my $one = @sorted_pack.first([[2],], :k, :end) + 1;
my $two = @sorted_pack.first([[6],], :k, :end) + 1;
say $one * $two;
