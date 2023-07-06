/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 20:25:24 by cliew             #+#    #+#             */
/*   Updated: 2023/07/01 20:27:41 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	sp;
	int	fp;

	sp = 0;
	if (*to_find == '\0')
	{
		return ((char *) str);
	}
	while (str[sp] != '\0')
	{
		fp = 0;
		while (to_find[fp] != '\0' && str[sp + fp] == to_find[fp])
		{
			if (to_find[fp + 1] == '\0')
			{
				return ((char *) &str[sp]);
			}
			fp++;
		}
		sp++;
	}
	return (NULL);
}
