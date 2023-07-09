/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lteng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:31:41 by lteng             #+#    #+#             */
/*   Updated: 2023/07/09 14:50:26 by somin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	ft_tablen(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	verif_split(char **split)
{
	return (ft_is_digit(split[0]) && ft_is_printable(split[1]));
}

t_ch	*ft_do_elem(char *str1, char *str2)
{
	t_int	nbr;
	t_ch	*element;
	char	*c2;

	c2 = ft_strdup(str2);
	if (!c2)
		return (NULL);
	nbr = ft_atoi(str1);
	free(str1);
	element = create_elem(nbr, c2);
	free(str2);
	return (element);
}

t_ch	*ft_create_dict(char *content)
{
	int		i;
	char	**splited_char;
	t_ch	*chain;
	t_ch	*temp;
	char	*f;

	f = ":\n";
	chain = NULL;
	splited_char = ft_split(content, f);
	i = 0;
	while (i <= ft_tablen(splited_char) - 1)
	{
		temp = ft_do_elem(splited_char[i], splited_char[i + 1]);
		if (temp)
		{
			ft_push_back(&chain, temp);
		}
		i += 2;
	}
	free(splited_char);
	return (chain);
}
