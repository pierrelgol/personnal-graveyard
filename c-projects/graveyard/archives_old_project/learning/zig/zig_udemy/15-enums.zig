const expect = @import("std").testing.expect;

const direction = enum { north, south, east, west };
const value = enum(u2) { zero, one, two };

test "enum ordinal value" {
    try expect(@enumToInt(value.zero) == 0);
    try expect(@enumToInt(value.one) == 1);
    try expect(@enumToInt(value.two) == 2);
}

// test "enum ordinal value" {
//     try expect(direction.north == 0);
//     try expect(direction.south == 1);
//     try expect(direction.east == 2);
//     try expect(direction.west == 3);
// }

const value2 = enum(u32) {
    hundred = 100,
    thousand = 1000,
    million = 1000000,
    next,
};

test "enum ordinal value2" {
    try expect(@enumToInt(value2.hundred) == 100);
    try expect(@enumToInt(value2.thousand) == 1000);
    try expect(@enumToInt(value2.million) == 1000000);
    try expect(@enumToInt(value2.next) == 1000001);
}

const suits = enum {
    clubs,
    spades,
    diamonds,
    hearts,
    pub fn isclub(self: suits) bool {
        return self == suits.clubs;
    }
};

test "enum method" {
    try expect(suits.spades.isclub() == suits.isclub(.spades));
}

const mode = enum {
    var count: u32 = 0;
    on,
    off,
};

test "var in enum" {
    mode.count += 1;
    try expect(mode.count == 1);
}
