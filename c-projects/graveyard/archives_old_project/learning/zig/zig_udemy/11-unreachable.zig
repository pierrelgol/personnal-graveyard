const expect = @import("std").testing.expect;

// test "unreachable : test1" {
//     const x: i32 = 1;
//     const y: u32 = if (x == 3) 5 else unreachable;
//     _ = y;
// }

fn ascii_toupper(x: u8) u8 {
    return if (x >= 97 and x <= 126) x - 97 else x;
}

fn ascii_tolower(x: u8) u8 {
    return switch (x) {
        'A'...'Z' => x - 'A' + 'a',
        'a'...'z' => x,
        else => unreachable,
    };
}

test "unreachable : switch" {
    try expect(ascii_tolower('0') == 'a');
}
