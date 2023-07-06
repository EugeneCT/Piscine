/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:24:51 by cliew             #+#    #+#             */
/*   Updated: 2023/07/01 20:27:18 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	start;
	int	count;

	count = 0;
	start = 0;
	while (dest[start] != '\0')
	{
		start++;
	}
	while (src[count] != '\0')
	{
		dest[start] = src[count];
		count++;
		start++;
	}
	dest[start] = '\0';
	return (dest);
}
