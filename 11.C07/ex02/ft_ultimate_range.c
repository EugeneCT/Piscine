/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 22:33:19 by cliew             #+#    #+#             */
/*   Updated: 2023/07/03 14:47:07 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;

	i = min;
	j = 0;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}

	*range = (int*) malloc ((max - min)*4);
	while (i < max)
	{
		(*range)[j] = i;
		i++;
		j++;
	}
	return (max - min);
}


/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}
*/
