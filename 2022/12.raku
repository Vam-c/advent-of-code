# Convert input string to grid.
my @hill = '12.txt'.IO.lines.map({ .split('', :skip-empty) });

# Map characters to height values.
my @chars = ('a'..'z').list;
my %height;
for 0..^@chars.elems {
    %height{@chars[$_]} = $_ + 1;
}

# Defined heights for start and end points.
 %height{'S'} = %height{'a'};
 %height{'E'} = %height{'z'};

# Find the coordinates of E.
my @start = (20, 120);

# I am unable to solve the error of why this (Seq) cannot be converted to 
# an Array. It keeps on throwing the iterator is consumed error.
# my @start = @hill.map({.first('E', :k)}).grep(Int, :kv).list;

# We require the fewest steps, so BFS is the way to go.
sub bfs() {
    # Keep track of visited nodes.
    my SetHash $visited .= new;

    # Keep track of parent node of current node.
    #  Child    Parent
    # (0, 1) => (0, 0). 
    my %parent;

    # Queue to store nodes which are to be visited next.
    my @queue = [(@start), ];

    while @queue.elems > 0 {
        # say "queue: {@queue.raku}";

        # Pop the first element from queue.
        my @current = @queue.shift.list;
        # Skip if it is already visited.
        if $visited{@current.Str} {
            next;
        }

        # say "current: {@current.raku}";

        # Check if we reached the destination.
        if isDestination(@current) {
            # We reached the Destination.
            # Count the steps required to reach here.
            # Backtrack till we reach Starting step.
            my $steps = 0;
            while @current !~~ @start {
                $steps++;
                @current = %parent{@current.Str}.list;
            }

            say $steps;
            exit;
        }

        # Mark it as visited.
        $visited.set(@current.Str);
        # say "visited: {$visited.raku}";

        # Get possible steps.
        my @possibleSteps = getPossibleSteps(@current);
        # say "possible steps: {@possibleSteps.raku}";

        # Add possible steps to the queue
        # if they aren't visited yet.
        for @possibleSteps -> $step {
            if !$visited{$step.Str} {
                # say "{$step} is not visited yet";
                # Track parent.
                %parent{$step} = @current;

                # Add to queue.
                @queue.append($step,);
            }
        }
    };
}

# getPossibleSteps takes the current step coordinates (0, 0)
# and return list of possible steps considering boundaries.
sub getPossibleSteps(@current) {
    my @neighbours = (@current[0] + 1, @current[1]; @current[0], @current[1] + 1;
                      @current[0] - 1, @current[1]; @current[0], @current[1] - 1);

    
    my @possibleSteps;
    # Check possible moves.
    for @neighbours -> @neighbour {
        # Boundary crossing neighbours are ignored.
        if @neighbour[0] < 0 
           || @neighbour[1] < 0 
           || @neighbour[0] >= @hill.elems 
           || @neighbour[1] >= @hill[0].elems
            {
                next;
            }
        
        # Neighbours which are more than one step higher are ignored
        if (getHeight(@current) - getHeight(@neighbour) > 1) {
            # say "{@neighbour.raku} {@hill[@neighbour[0]][@neighbour[1]]} {getHeight(@neighbour)} is not reachable.";
            next;
        }

        # Add neighbour to possible step list.
        # say "{@neighbour.raku} {@hill[@neighbour[0]][@neighbour[1]]} is a valid neighbour.";
        @possibleSteps.push(@neighbour);
    }

    return @possibleSteps;
}

# getHeight returns the height of a coordinate.
sub getHeight(@coordinate) {
    my $character = @hill[@coordinate[0]][@coordinate[1]];
    return %height{$character};
}

# isDestination checks if the coordinate is destination step.
sub isDestination(@coordinate) {
    my $character = @hill[@coordinate[0]][@coordinate[1]];
    return $character === 'a' || $character === 'S';
}

bfs();