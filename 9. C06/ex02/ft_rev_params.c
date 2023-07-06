/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:35:14 by cliew             #+#    #+#             */
/*   Updated: 2023/07/01 20:35:16 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 0;
	k = argc - 1;
	while (k > 0)
	{
		while (argv[k][i] != '\0')
		{
			ft_putchar(argv[k][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		k--;
	}
}
