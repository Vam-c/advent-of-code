my @element = [];
my $sand-origin = (0, 500);

sub paint-cave(@row-bounds, @col-bounds, @sand-pos) {
    run "clear";
    for @row-bounds[0]..@row-bounds[1] + 2 -> $row {
        for @col-bounds[0] - 10..@col-bounds[1] + 10 -> $col {
            my $cell = @element[$row][$col].gist;

            if $cell eq '#' || $cell eq 'o' {
                print $cell; 
            } elsif ($row, $col).list ~~ $sand-origin {
                print "+";
            } elsif ($row, $col).list ~~ @sand-pos {
                print "0";
            } elsif $row == @row-bounds[1] + 2 {
                print "#";
            } else {
                print ".";
            }
        }
        say "";
    }
}

my @paths = '14.txt'.IO.slurp.split("\n").map({ $_.split(" -> ") });
my @row-bounds = (0, 0);
my @col-bounds = (Inf, 0);

# mark points which are lines of rock.
for @paths -> @path {
    my @rock-lines = @path.map({ $_.split(",") });

    for 1..^@rock-lines.elems {
        my @from = @rock-lines[$_ - 1].cache;
        my @to = @rock-lines[$_].cache;

        # Update cave bounds.
        @row-bounds[1] = (@row-bounds[1], @from[1].Int, @to[1].Int).max;
        @col-bounds[0] = (@col-bounds[0], @from[0].Int, @to[0].Int).min;
        @col-bounds[1] = (@col-bounds[1], @from[0].Int, @to[0].Int).max;

        # mark rock points along the line.
        if @from[0] != @to[0] {
            if @from[0] < @to[0] {
                @element[@from[1]][$_] = "#" for @from[0].Int..@to[0].Int;
            } else {
                @element[@from[1]][$_] = "#" for @to[0].Int..@from[0].Int;
            }
        } else {
            if @from[1] < @to[1] {
                @element[$_][@from[0]] = "#" for @from[1].Int..@to[1].Int;
            } else {
                @element[$_][@from[0]] = "#" for @to[1].Int..@from[1].Int;
            }
        }
    }
}

# Checks if the current pos is withing bounds.
sub within-bounds($pos) {
    return $pos[0] (elem) @row-bounds[0]..@row-bounds[1]
        && $pos[1] (elem) @col-bounds[0]..@col-bounds[1];
}

# Sand Simulation.
my $count = 0;
my @sand-pos = $sand-origin.Slip;
my @prev-pos = (0, 0);

# Generate sand until a particle goes out of bounds.
while @element[$sand-origin[0]][$sand-origin[1]].gist !eq "o" {
    # Drop new particle if prev position is same as current.
    if (@prev-pos !~~ (0, 0)  && @sand-pos ~~ @prev-pos) {
        # Increment particle count.
        $count++;

        # Store the settled position of sand.
        @element[@sand-pos[0]][@sand-pos[1]] = "o";

        # Resent sand-pos to origin.
        @sand-pos = $sand-origin.Slip;
        @prev-pos = $sand-origin.Slip;
    }

    @prev-pos = @sand-pos;

    my $row = @sand-pos[0];
    my $col = @sand-pos[1];

    # Update particle position.
    for ($col, $col - 1, $col + 1) {
        # floor condition.
        if $row + 1 == @row-bounds[1] + 2 {
            @sand-pos = ($row, $_);
            last;
        }

        my $element = @element[$row + 1][$_].gist;
        if $element !eq "#" && $element !eq "o" {
            @sand-pos = ($row + 1, $_);
            last;
        } 
    }
} 

paint-cave(@row-bounds, @col-bounds, @sand-pos);
say $count;