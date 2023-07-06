/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:06:22 by cliew             #+#    #+#             */
/*   Updated: 2023/07/03 16:06:35 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	check;

	check = 2;
	if (nb < 2)
		return (0);
	else if (nb < 4)
		return (1);
	while (check <= nb / 2)
	{
		if (nb % check == 0)
			return (0);
		check++;
	}
	return (1);
}
