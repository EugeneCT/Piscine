/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:05:21 by cliew             #+#    #+#             */
/*   Updated: 2023/07/03 16:15:03 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	check;
	long	number;

	number = (long)nb;
	check = 0;
	if (number <= 0)
		return (0);
	while (check * check <= number)
	{
		if (check * check == number)
			return (check);
		check++;
	}
	return (0);
}
