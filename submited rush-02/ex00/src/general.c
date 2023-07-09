/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lteng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:27:21 by lteng             #+#    #+#             */
/*   Updated: 2023/07/09 14:58:03 by somin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

void	ft_putstr(char *c)
{
	write(1, c, ft_strlen(c));
}

char	*ft_search(t_ch *begin_list, t_int value)
{
	t_ch	*temp;

	temp = begin_list;
	while (temp->next)
	{
		if (temp->value == value)
			return (temp->line);
		temp = temp->next;
	}
	if (temp->value == value)
		return (temp->line);
	return (NULL);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;
	int		j;
	
	i = 0;
	j = 0;
	while (src[i] && (src[i] == ' ' || src[i] == '\t' || src[i] == '\n'))
		i++;
	while (src[i + j])
		j++;
	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
		return (NULL);
	j = 0;
	while (src[i + j])
	{
		s[j] = src[i + j];
		j++;
	}
	s[j] = '\0';
	return (s);
}

t_int	ft_atoi(char *str)
{
	t_int	num;

	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str >= '0' && *str <= '9' && *str)
	{
		num = num * 10 + *str - 48;
		str++;
	}
	return (num);
}
