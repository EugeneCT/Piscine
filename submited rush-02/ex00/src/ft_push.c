/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lteng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:27:08 by lteng             #+#    #+#             */
/*   Updated: 2023/07/08 18:27:10 by lteng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

t_ch	*ft_find_end(t_ch *begin)
{
	t_ch	*temp;

	temp = begin;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

void	ft_push_back(t_ch **begin_list, t_ch *elem)
{
	t_ch	*temp;

	if (!elem)
		return ;
	if (!*begin_list)
		*begin_list = elem;
	else
	{
		temp = ft_find_end(*begin_list);
		temp->next = elem;
	}
}

void	ft_push_front(t_ch **begin_list, t_int value, char *line)
{
	t_ch	*deb;

	deb = create_elem(value, line);
	if (deb)
	{
		if (*begin_list)
		{
			deb->next = *begin_list;
		}
		*begin_list = deb;
	}
}
