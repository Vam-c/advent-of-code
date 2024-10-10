my @pairs = '13.txt'.IO.slurp.split("\n\n");

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
sub compare-lists(@left, @right, $tabs) {
    # length-response should be returned only if response
    # is not zero till loop ends.
    my $length-response = @right.elems - @left.elems;
    my $response = 0;

    for @left Z @right -> [$left, $right] {
        # Stop comparision when response is non zero.
        last if $response != 0;
        # say "{"  " x $tabs}- Compare {$left.raku} vs {$right.raku}";

        if $left.^name eq $right.^name {
            $response = $left.^name eq "Array" ?? 
                compare-lists($left, $right, $tabs + 1) !! $right - $left;
        } else {
            # Both elements are not of the same type.
            # Convert Int type to List and compare them.
            my @new-left = Array($left.Slip);
            my @new-right = Array($right.Slip);

            $response = compare-lists(@new-left, @new-right, $tabs + 1);
        }
    };
    
    # if $response > 0 {
    #     say "{"  " x $tabs+1}- Left is smaller, right order\n";
    # } elsif $response < 0 {
    #     say "{"  " x $tabs+1}- Right is smaller, wrong order\n";
    # }

    return $response == 0 ?? $length-response !! $response;
}

# Keep track of current index.
my $index = 0;
my $sum = 0;
for @pairs -> $pair {
    $index++;

    # Convert the pair to a list of integers/lists.
    my ($left, $right) = $pair.split("\n");
    my @left = get-packet-list($left);
    my @right = get-packet-list($right);

    # Compare values.
    # say "- Compare {@left.raku} vs {@right.raku}";
    my $response = compare-lists(@left, @right, 1);
    $sum += $index if $response > 0;
    say $sum;
}