/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 02:16:33 by cliew             #+#    #+#             */
/*   Updated: 2023/07/02 03:14:07 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		verify(int board[4][4], int tab[16]);

void	print_board(int board[4][4]);

void	ft_get_candidates(int board[4][4], int x, int y, int *candidates)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		candidates[i] = 1;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (board[i][x] != 0)
			candidates[board[i][x]] = 0;
		if (board[y][i] != 0)
			candidates[board[y][i]] = 0;
		i++;
	}
}

int	ft_verify_then_print_board(int board[4][4], int input[16])
{
	if (verify(board, input) == 1)
	{
		print_board(board);
		return (1);
	}
	return (0);
}

int	ft_next_x(int x)
{
	if (x < 3)
		return (x + 1);
	else
		return (0);
}

int	ft_next_y(int x, int y)
{
	if (x < 3)
		return (y);
	else
		return (y + 1);
}

int	generate_board(int board[4][4], int x, int y, int input[16])
{
	int	candidates[5];
	int	i;
	int	next_x;
	int	next_y;

	if (x == 0 && y == 4)
		return (ft_verify_then_print_board(board, input));
	next_x = ft_next_x(x);
	next_y = ft_next_y(x, y);
	ft_get_candidates(board, x, y, candidates);
	i = 1;
	while (i <= 4)
	{
		if (candidates[i])
		{
			board[y][x] = i;
			if (generate_board(board, next_x, next_y, input) == 1)
				return (1);
		}
		i++;
	}
	board[y][x] = 0;
	return (0);
}
