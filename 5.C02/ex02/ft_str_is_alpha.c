/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:28:14 by cliew             #+#    #+#             */
/*   Updated: 2023/06/25 14:03:24 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_upper(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_lower(char letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (1);
	else
	{
		return (0);
	}
}

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (ft_is_upper(str[i]) || ft_is_lower(str[i]))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
