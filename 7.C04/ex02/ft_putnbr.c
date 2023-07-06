/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:43:09 by cliew             #+#    #+#             */
/*   Updated: 2023/06/29 19:40:03 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	printnum(long a);

void	ft_putnbr(int nb)
{
	printnum(nb);
}

void	printnum(long a)
{
	int	c;

	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
		printnum(a);
	}
	else if (a < 10)
	{
		c = a + '0';
		ft_putchar(c);
	}
	else if (a >= 10)
	{
		c = (a / 10);
		printnum(c);
		c = (a % 10);
		ft_putchar(c + '0');
	}
}
