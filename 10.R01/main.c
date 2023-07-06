/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 02:14:59 by cliew             #+#    #+#             */
/*   Updated: 2023/07/02 02:43:55 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_str_len(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	if (counter != 31)
		return (0);
	return (counter);
}

int	check_input_update_tab(char *str, int *tab)
{
	int	i;

	i = 0;
	if (get_str_len(str) != 31)
		return (0);
	while (str[i] != '\0')
	{
		if (i % 2 == 1)
		{
			if (str[i] != ' ')
				return (0);
		}
		else
		{
			if (str[i] >= '1' && str[i] <= '4')
				tab[i / 2] = (str[i] - '0');
			else
				return (0);
		}
		i++;
	}
	return (1);
}
int		generate_board(int board[4][4], int x, int y, int input[16]);

void	init_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	board[4][4];
	int	tab[16];

	if (argc != 2 || check_input_update_tab (argv[1], tab) == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	init_board(board);
	if (generate_board(board, 0, 0, tab) == 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}
