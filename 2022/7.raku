my $file = open '7.txt';

# working_dir stores the current path
my @working_dir;

# dir_size stores the directory file sizes
my %dir_size;

for $file.lines -> $line {
    my @words = $line.words;

    # cd handler
    if @words[1] === 'cd' {
        given @words[2] {
            when '..' {
                # pop current directory
                @working_dir.pop;
            }

            when '/' {
                @working_dir = '/',;
            }

            default {
                # Add 'it' to child of current_dir, and change the directory
                @working_dir.push($_);
            }
        }
    }

    # Add file sizes to current directory till next cd is encoutered
    if @words[0] !(elem) ('dir', '$') {
        # Add current file size to all parent directories
        for (0..^@working_dir) {
            my $path = @working_dir[0..$_];
            %dir_size{$path} += @words[0];
        }
    }
}

# sort sizes in ascending order and calculate sum for values < 100000
# %dir_size.values.sort.map({$_ if $_ < 100000}).reduce({$^a + $^b}).say;

# -----------Part 2-------------
my $unused_space = 70000000 - %dir_size{'/'};
my $required_space = 30000000 - $unused_space;
say %dir_size.values.sort.first: * > $required_space;

