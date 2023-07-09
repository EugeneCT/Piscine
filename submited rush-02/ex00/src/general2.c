/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lteng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:29:21 by lteng             #+#    #+#             */
/*   Updated: 2023/07/08 23:02:33 by somin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	ft_error(int i)
{
	if (i == 1)
		write(1, "Error\n", 6);
	else
		write(1, "Dict Error\n", 11);
	return (-1);
}

int	ft_is_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
			i++;
	if (i == 0)
		return (0);
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

char	*ft_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 126)
			return (NULL);
		i++;
	}
	return (str);
}

int	ft_is_valid(int i)
{
	if (i < 0)
		return (0);
	return (1);
}

void	ft_printchain(t_ch *chain)
{
	t_ch	*temp;

	temp = chain;
	while (temp->next)
	{
		ft_putstr(temp->line);
		ft_putstr(" ");
		temp = temp->next;
	}
	ft_putstr(temp->line);
	ft_putstr("\n");
}
