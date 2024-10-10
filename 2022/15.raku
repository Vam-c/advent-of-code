my $start = now;
my @lines = '15.txt'.IO.slurp.split("\n");

sub manhattan(@a, @b) {
    return abs(@a[0] - @b[0]) + abs(@a[1] - @b[1]);
}

my $max = 20;

my @sensorRanges;
# Extract sensors and their manhattan distance
# from closest beacons.
for @lines -> $line {
    my $match =  $line ~~ /'x='(.+)', y='(.+)':' <-[x]>* 'x='(.+)', y='(.+)$/;
    my @sensor = $match[0].Int, $match[1].Int;
    my @beacon = $match[2].Int, $match[3].Int;
    my $distance = manhattan(@sensor, @beacon);

    @sensorRanges.push((@sensor, $distance));
}

for @sensorRanges -> (@sensor, $distance) {
    my $range = $distance + 1;

    # Check intersections of this sensor's
    # border with other sensors.
    my @intersections = intersections(@sensor, $distance+1);

}

sub intersections(@sensor, $distance) {
    for @sensorRanges -> (@center, $range) {
        next if @center ~~ @sensor;


    }
}

# Merge overlapping ranges.
sub merge(@ranges) {
    @ranges = @ranges.sort;

    my @merged;
    my $prevX = @ranges[0][0] >= 0 ?? @ranges[0][0] !! 0;
    my $prevY = @ranges[0][1];
    for @ranges[1..*] -> @range {
        my $x = @range[0] >= 0 ?? @range[0] !! 0;
        my $y = @range[1];

        if $x <= $prevY + 1 {
            $prevY = min($max, max($y, $prevY));
        } else {
            @merged.push(($prevX.clone, $prevY.clone));
            $prevX = $x;
            $prevY = $y;
        }
    }
    @merged.push(($prevX.clone, $prevY.clone));
    return @merged;
}

say now - $start;