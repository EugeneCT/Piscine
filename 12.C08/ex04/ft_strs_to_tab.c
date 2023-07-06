/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:20:16 by cliew             #+#    #+#             */
/*   Updated: 2023/07/06 15:24:48 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*str_cpy(char *str, int size)
{
	int		i;
	char	*ret_str;

	i = 0;
	ret_str = (char *)malloc((size + 1) * sizeof(str));
	if (!ret_str)
		return (NULL);
	while (str[i] != '\0')
	{
		ret_str[i] = str[i];
		i++;
	}
	ret_str[i] = '\0';
	return (ret_str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ret_list;

	ret_list = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ret_list)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		ret_list[i].size = ft_strlen(av[i]);
		ret_list[i].str = av[i];
		ret_list[i].copy = str_cpy(av[i], ft_strlen(av[i]));
		i++;
	}
	ret_list[i].str = 0;
	return (ret_list);
}
