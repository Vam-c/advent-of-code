my $file = open '8.txt';

# save values in a 2x2 matrix.
my @grid = $file.lines.map: *.split('', :skip-empty);

my $scenic_score = 1;
my $max_score = 0;

loop (my $row = 0; $row < @grid.elems; $row++) {
    loop (my $col = 0; $col < @grid[$row]; $col++) {
        my $tree = @grid[$row][$col];

        # scenic score is 0 if we are at the edges.
        # so skip these trees.
        if $col == @grid[$row].elems - 1 
            || $row == @grid.elems - 1 
            || $row == 0  
            || $col == 0 { 
            # say "skipping @grid[$row][$col]";
            next;
        }

        # Scan till we find a tree with height 
        # equal or greater than current tree
        # or till we reach an edge
        # and find the viewing distance.

        # Scanning right 
        loop (my $i = $col + 1; $i <= @grid[$row].elems; $i++) {
            if @grid[$row][$i] >= $tree || $i == @grid[$row].elems - 1 {
                # say "$tree right @grid[$row][$i] score {$i - $col}";
                $scenic_score *= $i - $col;
                last;
            } 
        }

        # Scanning down.
        loop (my $j = $row + 1; $j <= @grid.elems; $j++) {
            if @grid[$j][$col] >= $tree || $j == @grid.elems - 1 {
                # say "$tree down @grid[$j][$col] score {$j - $row}";
                $scenic_score *= $j - $row;
                last;
            } 
        }

        # Scanning left 
        loop (my $curCol = $col - 1; $curCol >= 0; $curCol--) {
            if @grid[$row][$curCol] >= $tree || $curCol == 0 {
                # say "$tree left @grid[$row][$curCol] score {$col - $curCol}";
                $scenic_score *= $col - $curCol;
                last;
            } 
        }

        # Scanning up.
        loop (my $curRow = $row - 1; $curRow >= 0; $curRow--) {
            if @grid[$curRow][$col] >= $tree || $curRow == 0 {
                # say "$tree up @grid[$curRow][$col] score {$row - $curRow}";
                $scenic_score *= $row - $curRow;
                last;
            } 
        }

        # say "$scenic_score is calculated\n";
        # Update max if we find a better score.
        if $scenic_score > $max_score {
            $max_score = $scenic_score;
        }

        # reset scenic score.
        $scenic_score = 1;
    }
}

say $max_score;
