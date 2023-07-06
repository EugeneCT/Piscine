/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 13:07:23 by cliew             #+#    #+#             */
/*   Updated: 2023/06/25 14:41:44 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			return (i);
		}
		i++;
	}
	dest[i] = '\0';
	return (i);
}
