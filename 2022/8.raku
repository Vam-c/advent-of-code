my $file = open '8.txt';

# save values in a 2x2 matrix.
my @grid = $file.lines.map: *.split('', :skip-empty);
my $total_trees = @grid.elems * @grid[0].elems;

# max_top contains the maximum height tree above current tree 
# which is encountered till now.
my @max_top = @grid[0].flat;
my $invisible_trees = 0;

loop (my $row = 1; $row < @grid.elems; $row++) {
    # max_left holds the tallest tree encountered in a column
    my $max_left = 0;

    loop (my $col = 0; $col < @grid[$row].elems; $col++) {
        my $tree = @grid[$row][$col];

        my $visible = False;

        # If we encouter a taller tree, update max_left
        # These trees are visible from the left
        if $tree > $max_left { 
            $max_left = $tree; 
            $visible = True;
        }

        # If we encounter a taller tree than top, update max_col
        # of corresponding column. These are visible from the top
        if $tree > @max_top[$col] {
            @max_top[$col] = $tree;
            $visible = True;
        }

        # Mark the tree as visible if we are at the edges.
        if $col == @grid[$row].elems - 1 
            || $row == @grid.elems - 1 
            || $col == 0 { 
            $visible = True;
        }

        if !$visible {
            # Check if there is a tree with height 
            # equal or greater than current tree
            # and mark it invisible.
            my $invisibleRight = False;
            my $invisibleBottom = False;

            # Scanning the right.
            loop (my $i = $col + 1; $i < @grid[$row]; $i++) {
                if @grid[$row][$i] >= $tree {
                    $invisibleRight = True;
                    last;
                } 
            }

            # Scanning bottom.
            loop (my $j = $row + 1; $j < @grid; $j++) {
                if @grid[$j][$col] >= $tree {
                    $invisibleBottom = True;
                    last;
                } 
            }

            when $invisibleRight && $invisibleBottom {
                say "$tree is fully invisible. Good for a treehouse.";
                $invisible_trees++;
            }
        }
    }
}
say $total_trees;
say $total_trees - $invisible_trees;
