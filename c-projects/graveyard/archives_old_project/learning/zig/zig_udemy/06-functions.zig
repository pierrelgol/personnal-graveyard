const expect = @import("std").testing.expect;

fn add_five(x: u32) u32 {
    return x + 5;
}

fn fibo(x: u32) u32 {
    if (x == 0 or x == 1) return (x);
    return fibo(x - 1) + fibo(x - 2);
}

test "functions" {
    const y = add_five(5);
    try expect(y == 10);
    try expect(@TypeOf(y) == u32);
}

test "fibonacci" {
    const x: u32 = fibo(10);
    try expect(x == 55);
}
