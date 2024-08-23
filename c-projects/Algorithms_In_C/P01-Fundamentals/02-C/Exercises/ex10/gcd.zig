const std = @import("std");
const print = std.debug.print;

fn gcd(v1: i32, v2: i32) i32 {
    var temp: i32 = 0;
    var n1: i32 = v1;
    var n2: i32 = v2;
    while (n1 > 0) : (n1 = (n1 - n2)) {
        if (n1 < n2) {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
    }
    return (n2);
}
pub fn main() !void {
    var val1: i32 = 125;
    var val2: i32 = 25;
    print("The gcd of {} and {} is {}\n", .{ val1, val2, gcd(val1, val2) });
}
