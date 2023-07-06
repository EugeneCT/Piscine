/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:50:38 by cliew             #+#    #+#             */
/*   Updated: 2023/06/25 14:37:27 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	upper(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	else
		return (0);
}

int	lower(char letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	symbol(char letter)
{
	if (letter >= 32 && letter <= 45)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{		
		if ((symbol(str[i - 1]) || i == 0) && (upper(str[i]) || lower(str[i])))
		{
			if (lower(str[i]))
			{
				str[i] = str[i] - 32;
			}
		}
		else
		{
			if (upper(str[i]))
			{
				str[i] = str[i] + 32;
			}
		}	
		i++;
	}
	return (str);
}
