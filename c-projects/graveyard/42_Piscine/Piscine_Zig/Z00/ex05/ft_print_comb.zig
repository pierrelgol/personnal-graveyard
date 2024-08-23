const std = @import("std");

fn ft_print_comb() void {
    var nbr = [3]u8{ '0', '0', '0' };

    while (nbr[0] <= '7') : (nbr[0] += 1) {
        nbr[1] = nbr[0] + 1;
        while (nbr[1] <= '8') : (nbr[1] += 1) {
            nbr[2] = nbr[1] + 1;
            while (nbr[2] <= '9') : (nbr[2] += 1) {
                std.debug.print("{c}{c}{c}", .{
                    nbr[0],
                    nbr[1],
                    nbr[2],
                });
                if (!(nbr[0] == '7' and nbr[1] == '8' and nbr[2] == '9'))
                    std.debug.print(", ", .{});
            }
        }
    }
}

pub fn main() void {
    ft_print_comb();
}
