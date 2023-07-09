/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:42:30 by cliew             #+#    #+#             */
/*   Updated: 2023/07/09 17:51:53 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	not_in(char a_char, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (a_char == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	logic(char *str, char *charset, char **ret_list)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (not_in(str[i], charset))
		{
			ret_list[j][k] = str[i];
			k++;
		}
		else
		{
			ret_list[j][k] = '\0';
			j++;
			k = 0;
		}
		i++;
	}
	ret_list[j][k] = '\0';
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**ret_list;
	int		max_str;
	int		i;

	i = 0;
	max_str = str_len(str);
	ret_list = (char **)malloc((max_str + 2) * sizeof (char *));
	if (max_str == 0)
	{
		ret_list[0] = 0;
		return (ret_list);
	}
	while (i < max_str)
	{
		ret_list[i] = (char *)malloc ((max_str + 1) * sizeof(char));
		i++;
	}
	logic(str, charset, ret_list);
	return (ret_list);
}

/*
int main(int argc, char **argv)
{
	char	**result;
	int i;
	result = ft_split (argv[1], argv[2]);
	
	while (i < 5)
	{
		printf("%s",result[i]);
		printf("%c",'\n');

		i++;
	}
	
	return (0);
}
*/
