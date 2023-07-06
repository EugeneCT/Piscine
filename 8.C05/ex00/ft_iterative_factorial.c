/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:43:47 by cliew             #+#    #+#             */
/*   Updated: 2023/07/03 15:44:15 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	numb;

	numb = nb;
	if (numb < 0)
		return (0);
	if (numb == 0)
		return (1);
	while (numb > 1)
	{
		nb *= numb - 1;
		numb--;
	}
	return (nb);
}
