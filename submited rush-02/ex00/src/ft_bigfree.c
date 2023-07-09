/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lteng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:30:48 by lteng             #+#    #+#             */
/*   Updated: 2023/07/08 18:30:49 by lteng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

void	ft_bigfree_dict(t_ch *begin_list)
{
	if (!begin_list)
		return ;
	ft_bigfree_dict(begin_list->next);
	free(begin_list->line);
	free(begin_list);
}

void	ft_bigfree_res(t_ch *begin_list)
{
	if (!begin_list)
		return ;
	ft_bigfree_res(begin_list->next);
	free(begin_list);
}

void	ft_bigfree2(char **splited_char)
{
	int	i;

	i = 0;
	while (splited_char[i])
	{
		free(splited_char[i]);
		i++;
	}
	free(splited_char);
}
