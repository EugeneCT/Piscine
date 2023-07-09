/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lteng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:31:58 by lteng             #+#    #+#             */
/*   Updated: 2023/07/08 18:31:59 by lteng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	ft_is_charset(char str, char *charset)
{
	while (*charset)
		if (str == *charset++)
			return (1);
	return (0);
}

int	ft_len_w(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_is_charset(str[i], charset) == 0)
		i++;
	return (i);
}

int	ft_nbr_w(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (*str)
	{
		while (*str && (ft_is_charset(*str, charset)))
			str++;
		i = ft_len_w(str, charset);
		str += i;
		if (i)
			count++;
	}
	return (count);
}

char	*ft_copy(char *src, int n)
{
	char	*res;

	res = malloc((n + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[n] = '\0';
	while (n--)
		res[n] = src[n];
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	int		i;
	int		n;
	char	**tab;

	n = 0;
	size = ft_nbr_w(str, charset);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && ft_is_charset(*str, charset))
			str++;
		n = ft_len_w(str, charset);
		tab[i] = ft_copy(str, n);
		if (!tab[i])
			return (NULL);
		str += n;
	}
	tab[size] = 0;
	return (tab);
}
