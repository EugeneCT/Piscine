/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:42:16 by cliew             #+#    #+#             */
/*   Updated: 2023/06/29 19:42:46 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	base_check(char *base)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (1);
	while (base[i] != '\0')
	{	
		if (base[i] <= 32 || base[i] >= 126)
			return (1);
		while (a < i)
		{
			if (base[i] == base[a])
				return (1);
			a++;
		}
		i++;
	}
	return (0);
}

void	printnum(long nbr, int base_l, char *base)
{
	int	a;

	if (nbr < 0)
	{
		ft_putchar('-');
		printnum(-nbr, base_l, base);
	}
	else if (nbr < base_l)
	{
		ft_putchar(base[nbr]);
	}
	else if (nbr >= base_l)
	{
		a = nbr / base_l;
		printnum(a, base_l, base);
		a = nbr % base_l;
		printnum(a, base_l, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	a;
	int	check;
	int	base_l;

	a = 0;
	check = base_check(base);
	if (check != 1)
	{
		while (base[a] != '\0')
			a++;
		base_l = a;
		printnum(nbr, base_l, base);
	}
}
