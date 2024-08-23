/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:22:39 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/19 11:23:02 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define N 8
#define TRUE 1
#define FALSE 0

int     ft_abs(int nb);
void    ft_print_solution(int *board);
int     ft_check_solution(int col, int row, int *board);
void    ft_ten_queens_puzzle(int col, int *board);

int     main(void)
{
    int board[N];
    int index;


    index = 0;
    while(index < N)
        board[index++] = -1;

    ft_ten_queens_puzzle(0, board);
    return 0;
}

void     ft_print(int *board)
{
    int index;
    int nb;

    index = 0;
    while (index < N)
    {
        nb = '0' + board[index++];
        write(1, &nb, 1);
    }
    write(1,&"\n",1);
}

int     ft_abs(int nb)
{
    if (nb < 0)
        return (-nb);
    return (nb);
}

int     ft_check_solution(int col, int row, int *board)
{
    int index;

    index = 0;
    while(index < col)
    {
        if (board[index] == row || ft_abs(col - index) == ft_abs(board[index] - row))
            return (FALSE);
        ++index;
    }
    return (TRUE);
}

void     ft_ten_queens_puzzle(int col, int *board)
{
    int row;

    if (col == N)
    {
        ft_print(board);
        return;
    }

    row = 0;
    while(row < N)
    {
        if(ft_check_solution(col, row, board) == TRUE)
        {
            board[col] = row;
            ft_ten_queens_puzzle(col + 1, board);
            board[col] = -1;
        }
        ++row;
    }
}
