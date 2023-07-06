/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:39:58 by cliew             #+#    #+#             */
/*   Updated: 2023/06/26 17:48:42 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count1;
	unsigned int	count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (src[count2] != '\0')
	{
		if (count2 < nb)
		{
			dest[count2 + count1] = src[count2];
			count2++;
		}
		else
		{
			dest[count1 + count2] = '\0';
			return (dest);
		}
	}
	dest[count1 + count2] = '\0';
	return (dest);
}
