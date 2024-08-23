const std = @import("std");
const expect = @import("std").testing.expect;

test "if statement" {
    const isTrue = true;
    var x: u16 = 0;

    if (isTrue) {
        x += 1;
    } else {
        x += 5;
    }

    try expect(x == 1);
}

test "if as an expression" {
    const isTrue = true;
    var x: u16 = 0;

    x += if (isTrue) 1 else 5;

    try expect(x == 1);
}

test "if as an expression as false" {
    const isTrue = false;
    var x: u16 = 0;

    x += if (isTrue) 1 else 5;

    try expect(x == 1);
}

pub fn main() void {}
