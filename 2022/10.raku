my @instructions = '10.txt'.IO.lines;

# Keep track of the value of register.
my $register = 1;

# Keep track of the instruction to execute.
my $instructionIndex = 0;

# Check is addx instruction is being executed.
my $addx = False;

my $sumOfSignals = 0;

sub drawPixel ($cycle, $register) {
    # Current pixel being drawn is $cycle - 1.
    my $pixel = ($cycle - 1) % 40;

    # Check if the sprite is visible.
    if $pixel (elem) ($register - 1)..($register + 1) {
        print '#';
    } else {
        print '.';
    }

    print "\n" if $cycle %% 40;  
};

# Number of cycles to execute.
for 1..* {
    # Draw the current pixel.
    drawPixel($_, $register);

    # Exit loop when all instructions are executed.
    last if $instructionIndex >= @instructions.elems;

    # Load current instruction.
    my $instruction = @instructions[$instructionIndex];

    given $instruction {
        when 'noop' {
            $instructionIndex++;
        };

        when /'addx '/ {
            my $value = $/.postmatch;

            # if addx is already in execution, update register value.
            # and increment the instructionIndex.
            if $addx === True {
                $register += $value;
                $instructionIndex++;
                $addx = False; # Mark addx instruction as finished.
            } else {
                # Mark addx instruction as in execution.
                $addx = True;
            }
        };
    }
};

say $sumOfSignals;