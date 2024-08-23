// **************************************************************************** //
//                                                                              //
//                                                         :::      ::::::::    //
//    ft_putchar.zig                                     :+:      :+:    :+:    //
//                                                     +:+ +:+         +:+      //
//    By: pollivie <pollivie@student.42.fr>          +#+  +:+       +#+         //
//                                                 +#+#+#+#+#+   +#+            //
//    Created: 2023/09/30 19:29:33 by pollivie          #+#    #+#              //
//    Updated: 2023/09/30 19:29:35 by pollivie         ###   ########.fr        //
//                                                                              //
// **************************************************************************** //

const std = @import("std");

fn ft_putchar(ch: u8) void {
    std.debug.print("{c}", .{ch});
}

test "test all ascii" {
    var ch: u8 = 0;
    while (ch < 255) : (ch += 1) {
        if (ch % 16 == 0) {
            std.debug.print("\n", .{});
        } else {
            ft_putchar(ch);
        }
    }
}
