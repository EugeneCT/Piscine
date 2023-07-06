/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwong-ch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:19:00 by nwong-ch          #+#    #+#             */
/*   Updated: 2023/06/24 15:19:26 by nwong-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	line1(int x)
{
	int	counter;

	counter = 1;
	while (counter <= x)
	{
		if (counter == 1)
		{
			ft_putchar('A');
		}
		else if (counter <= x)
		{
			if (counter == x)
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('B');
			}
		}
		counter++;
	}
}

void	lastline(int x)
{
	int	counter;

	counter = 1;
	while (counter <= x)
	{
		if (counter == 1)
		{
			ft_putchar('C');
		}
		else if (counter <= x)
		{
			if (counter == x)
			{
				ft_putchar('A');
			}
			else
			{
				ft_putchar('B');
			}
		}
		counter++;
	}
}

void	middle(int x)
{
	int	counter;

	counter = 1;
	while (counter <= x)
	{
		if (counter == 1)
		{
			ft_putchar('B');
		}
		else if (counter <= x)
		{
			if (counter == x)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
		}
		counter++;
	}
}

int	to_int(char *a)
{
	int	counter;
	int	digit;
	int	len;

	counter = 0;
	digit = 0;
	len = 0;
	while (a[len] != '\0')
	{
		len++;
	}	
	while (a[counter] != '\0')
	{
		digit += a[counter] - '0';
		if (counter < len - 1)
		{
			digit *= 10;
		}
		counter++;
	}
	return (digit);
}

void	rush(char *a, char *b)
{
	int	tmp;
	int	x;
	int	y;

	x = to_int(a);
	y = to_int(b);
	tmp = 1;
	while (tmp <= y)
	{
		if (tmp == 1)
		{
			line1(x);
		}
		else if (tmp == y)
		{
			lastline(x);
		}
		else
		{
			middle(x);
		}
		tmp++;
		write(1, "\n", 1);
	}
}
