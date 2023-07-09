/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lteng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:24:49 by lteng             #+#    #+#             */
/*   Updated: 2023/07/08 18:25:44 by lteng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	check_ext(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == 0)
		return (-1);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j])
				j++;
			if (to_find[j] == 0 && str[i + j] == 0)
				return (1);
		}
		i++;
	}
	return (0);
}

int	as_minus(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		if (c[i++] == '-')
			return (1);
	return (0);
}

int	ft_check_arg(int argc, char **argv, char **path, t_int *value)
{
	if (argc >= 2 && argc <= 3)
	{
		if (argc == 3)
		{
			if (check_ext(argv[1], ".dict") == 1)
			{
				*path = argv[1];
				if (!ft_is_digit(argv[2]))
					return (0);
				*value = ft_atoi(argv[2]);
				if ((ft_strlen(argv[2]) < 39))
					return (1);
			}
		}
		else
		{
			*path = "numbers.dict";
			if (!ft_is_digit(argv[1]))
				return (0);
			*value = ft_atoi(argv[1]);
			if ((ft_strlen(argv[1]) < 39))
				return (1);
		}
	}
	return (0);
}
