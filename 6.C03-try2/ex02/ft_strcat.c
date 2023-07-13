/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:38:11 by cliew             #+#    #+#             */
/*   Updated: 2023/07/11 20:38:14 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	str_len;

	i = 0;
	str_len = 0;
	while (dest[str_len] != '\0')
		str_len++;
	while (src[i] != '\0')
	{
		dest[str_len + i] = src[i];
		i++;
	}
	dest[str_len + i] = '\0';
	return (dest);
}
