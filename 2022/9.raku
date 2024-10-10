my $startTime = now;

my @moves = '9.txt'.IO.lines;

# Initialise head and tail at start (0, 0)
my @head = (0, 0);
my @tail = (0, 0);

# Store the visited postions of tail.
my @visited = ([0, 0],);

for @moves -> $move {
    my ($direction, $steps) = $move.split(' ');

    # tail takes the position of head under 2 conditions.
    # 1) distance (manhatten) is 2 orthogonally.
    # 2) distance (manhatten) is >2 diagonally.
    # 
    # else tail won't move.

    while $steps > 0 {
        my @currentHead = @head;

        # Update position of head.
        given $direction {
            when 'R' { @head[1]++; }
            when 'U' { @head[0]++; }
            when 'D' { @head[0]--; }
            when 'L' { @head[1]--; }
        }

        # Calculate distance between head and tail.
        my $distance = abs(@head[0] - @tail[0]) + abs(@head[1] - @tail[1]);

        # Check if head and tail are not diagonal.
        if (@head[0] === @tail[0] || @head[1] === @tail[1]) {
            if $distance > 1 { 
                @tail = @currentHead; 

                # mark as visited if not already visited.
                if !(@currentHead eqv any(@visited)) {
                    @visited.push(@currentHead); 
                }
            } 
        } else {
            if $distance > 2 { 
                @tail = @currentHead; 

                # mark as visited if not already visited.
                if !(@currentHead eqv any(@visited)) {
                    @visited.push(@currentHead); 
                }
            } 
        }
        # say "Head is now at {@head}\nTail is now at {@tail}, $distance units apart";
        $steps--;
    } 
}

say "Visited positions {@visited.elems}";

say "Execution time: {now - $startTime}";