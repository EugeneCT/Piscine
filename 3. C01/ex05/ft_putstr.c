/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:28:29 by cliew             #+#    #+#             */
/*   Updated: 2023/06/23 11:33:52 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		write(1, &str[pos], 1);
		pos++;
	}
}
