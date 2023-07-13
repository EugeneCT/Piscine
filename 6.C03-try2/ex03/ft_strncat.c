/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:38:31 by cliew             #+#    #+#             */
/*   Updated: 2023/07/11 20:38:34 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				str_len;

	i = 0;
	str_len = 0;
	while (dest[str_len] != '\0')
		str_len++;
	while (src[i] != '\0' && i < nb)
	{
		dest[str_len + i] = src[i];
		i++;
	}
	dest[str_len + i] = '\0';
	return (dest);
}
