const expect = @import("std").testing.expect;

fn total(value: []const u8) usize {
    var sum: usize = 0;
    for (value) |v| sum += v;
    return sum;
}

test "slice" {
    const array = [_]u8{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    const slice = array[0..3];

    try expect(total(slice) == 6);
}

test "slice type" {
    const array = [_]u8{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    const slice = array[0..3];

    try expect(@TypeOf(slice) == *const [3]u8);
}
