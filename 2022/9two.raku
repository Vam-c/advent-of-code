my $startTime = now;

my @moves = '9.txt'.IO.lines;

# printRope subroutine prints a grid with each 
# coordinate plotted.
sub printRope(@coordinates, %gridDimensions) {
    sleep (0.2);
    run 'clear';
    for %gridDimensions<maxRow>...%gridDimensions<minRow> -> $row {
        for %gridDimensions<minCol>...%gridDimensions<maxCol> -> $col {
            my @coordinate = ($row, $col);

            if @coordinate ~~ @coordinates[0] {
                print '@';
                next;
            }

            if (@coordinate ~~ [0, 0]) {
                print 's';
                next;
            }

            if (@coordinate eq any(@coordinates)) {
                print '#';
                next;
            }

            print '.';
        };
        say '';
    };

    say "@coordinates[0] is head";
    say "@coordinates[@coordinates.elems - 1] is tail";
};

# Initialise head and tail(s) at start (0, 0)
my @coordinates = (^10).map: {[0,0]};

# gridDimensions is used to print the base grid for visualising the movement.
my %gridDimensions = 'minRow' => 0, 'maxRow' => 2, 'minCol' => 0, 'maxCol' => 2,;

# Store the visited postions of tail.
# SetHash iterates through the provided list and creates the set.
# So convert each coordinate into an object before setting.
my %visited;

for @moves -> $move {
    my ($direction, $steps) = $move.split(' ');

    # tail moves in the direction of head under 2 conditions.
    # 1) distance (manhatten) is 2 orthogonally.
    # 2) distance (manhatten) is >2 diagonally. (tail also moves diagonally).
    # 
    # else tail won't move.

    while $steps > 0 {
        my @prevHead = @coordinates[0].flat;

        # Update position of head of the rope.
        given $direction {
            when 'R' { @coordinates[0][1]++; }
            when 'U' { @coordinates[0][0]++; }
            when 'D' { @coordinates[0][0]--; }
            when 'L' { @coordinates[0][1]--; }
        }

        # For each further elements(tail), update its position with reference to previous element(head).
        loop (my $index = 0; $index < @coordinates.elems - 1; $index++) {
            my @head = @coordinates[$index].flat;
            my @tail = @coordinates[$index + 1].flat;

            # If the tail is not updated, none of the following knots will move. 
            # We can exit early.
            my $tailMoved = False;

            # Calculate distance between head and tail.
            my ($distanceX, $distanceY) = @head[0] - @tail[0], @head[1] - @tail[1];

            # Check if head and tail are not diagonal.
            if ($distanceX == 0 || $distanceY == 0) {
                if abs($distanceX) > 1 || abs($distanceY) > 1 { 
                    # Move tail one unit in the direction of head.
                    @tail[0] += $distanceX.sign; 
                    @tail[1] += $distanceY.sign; 
                    $tailMoved = True;
                }
            } else {
                # Move in the diagonal direction of head only if the 
                # Manhattan distance is 2+.
                if (abs($distanceX) + abs($distanceY)) > 2 { 
                    @tail[0] += $distanceX.sign; 
                    @tail[1] += $distanceY.sign; 
                    $tailMoved = True;
                } 
            }

            # Update coordinates with new tail values.
            @coordinates[$index + 1] = @tail;

            # exit if tail is not updated.
            last unless $tailMoved;

            # Update grid dimensions to ensure new points can be visualised.
            %gridDimensions<maxRow> = max(%gridDimensions<maxRow>, @head[0]);
            %gridDimensions<maxCol> = max(%gridDimensions<maxCol>, @head[1]);
            %gridDimensions<minRow> = min(%gridDimensions<minRow>, @head[0]);
            %gridDimensions<minCol> = min(%gridDimensions<minCol>, @head[1]);
        }

        printRope(@coordinates, %gridDimensions);

        # Mark tail position as visited.
        # mark as visited if not already visited.
        %visited{$(@coordinates.tail.List)} = True;

        $steps--;
    } 
}
say "Visited positions {%visited.elems}";

say "Execution time: {now - $startTime}";