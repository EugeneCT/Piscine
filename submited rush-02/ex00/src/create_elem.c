/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lteng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:31:31 by lteng             #+#    #+#             */
/*   Updated: 2023/07/08 18:31:34 by lteng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

t_ch	*create_elem(t_int value, char *line)
{
	t_ch	*res;

	res = malloc(sizeof(t_ch));
	if (!res)
		return (NULL);
	res->next = NULL;
	res->value = value;
	res->line = line;
	return (res);
}
