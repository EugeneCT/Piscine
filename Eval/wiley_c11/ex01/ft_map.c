/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wngui <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:04:18 by wngui             #+#    #+#             */
/*   Updated: 2023/07/04 15:04:24 by wngui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;
	int	*d;

	res = malloc(length * sizeof(int));
	d = (res);
	if (!d)
		return (0);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}
