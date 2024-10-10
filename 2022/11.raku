my @monkeyDetailStrings = '11.txt'.IO.split("\n\n");

my @monkies;

# Convert data to hashMap of monkies.
for @monkeyDetailStrings -> $monkeyString {
    my @lines = $monkeyString.split("\n");

    my $monkeyNumber = (@lines[0] ~~ / \d+ /).Int;
    my @items = @lines[1].split(': ')[1].split(', ');

    my $equation = @lines[2] ~~ / 'old ' (.) ' ' (.*) /;
    my %operation = 'operator' => $equation[0].Str, 'operand' =>  $equation[1].Str;

    my $divisor = (@lines[3] ~~ / \d+ /).Int;

    my $trueMonkey = (@lines[4] ~~ / \d+ /).Int;
    my $falseMonkey = (@lines[5] ~~ / \d+ /).Int;

    @monkies[$monkeyNumber] = {
        %operation,
        'items' => @items,
        'divisor' => $divisor,
        'trueTo' => $trueMonkey,
        'falseTo' => $falseMonkey,
        'no' => $monkeyNumber,
        'inspections' => 0
    };
}

my $commonMultiple = 1;
$commonMultiple *= $_{'divisor'} for @monkies;

# Let the monkies roll...
for 1..10000 {
    for @monkies -> $monkey {
        for $monkey{'items'}.Array <-> $item {
            $monkey{'inspections'} += 1;

            # Inspect the item and update worry level.
            given $monkey{'operator'} {
                when '+' {
                    if ($monkey{'operand'} === 'old') {
                        $item += $item;
                        succeed;
                    }

                    $item += $monkey{'operand'};
                }

                when '*' {
                    if ($monkey{'operand'} === 'old') {
                        $item *= $item;
                        succeed;
                    }

                    $item *= $monkey{'operand'};
                }
            }
            
            # Divide worry level by 3 after inspection.
            $item = ($item % $commonMultiple).floor;

            # Run the monkey test and
            # add item to target Monkey items.
            if ($item %% $monkey{'divisor'}) {
                @monkies[$monkey{'trueTo'}]{'items'}.push($item);
            } else {
                @monkies[$monkey{'falseTo'}]{'items'}.push($item);
            }

            # Remove item from current monkey items.
            $monkey{'items'}.shift;
        }
    }
}

my @monkeyInspections;
@monkeyInspections.push($_{'inspections'}) for @monkies; 

@monkeyInspections = @monkeyInspections.sort.reverse;
say @monkeyInspections[1] * @monkeyInspections[1];