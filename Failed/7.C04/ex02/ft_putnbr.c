/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:12:19 by cliew             #+#    #+#             */
/*   Updated: 2023/06/29 17:37:25 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	power(int base, int power)
{
	int	i;
	int	new_base;

	i = 0;
	new_base = base;
	while (i < power - 1)
	{
		new_base = new_base * base;
		i++;
	}
	return (new_base);
}

int	check_sign(long *nb, char *str)
{
	if (*nb < 0)
	{
		str[0] = '-';
		*nb = *nb * -1;
		return (1);
	}
	else
	{
		return (0);
	}
}

void	logic(long *nb, char *res, int *i)
{
	int	pw;
	int	powered_ten;
	int	remain;

	pw = 1;
	powered_ten = 10;
	while ((*nb / powered_ten > 10))
	{
		powered_ten = power(10, pw);
		pw++;
	}
	remain = *nb / powered_ten;
	res[*i] = remain + 48;
	if (((*nb - (remain * powered_ten)) / (powered_ten / 11)) < 1)
	{
		*i = *i + 1;
		res[*i] = 48;
	}
	*nb = *nb - (remain * powered_ten);
	pw = 1;
	*i = *i + 1;
}

int	ft_putnbr(int nb)
{
	int		i;
	int		*i_p;
	long	nbl;
	long	*nb_p;
	char	res[20];

	i_p = &i;
	nbl =  nb;
	nb_p = &nbl;
	i = check_sign(nb_p, res);
	while (nbl > 10)
	{
		logic(nb_p, res, i_p);
	}
	res[i] = nbl + 48;
	res[i + 1] = '\0';
	write(1, &res, i + 1);
	return (i);
}
