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

int is_seperator(char str,char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (str != charset[i])
			i++;
		else 
			return (1);
	}

	if (str == '\0')
		return (1);
	return (0);
}

int count_words(char *str,char *charset)
{
	int i;
	int words;

	i = 0;
	words = 0;

	while (str[i]!= '\0')
	{
		if ((is_seperator(str[i],charset) == 0) && (is_seperator(str[i+1],charset) == 1))
			words++;
		i++;
	}
	return (words);
}


void ft_copy(char *str, char *ret_list, int start, int end)
{
	int i = 0;
	
	while (i < end)
	{
		ret_list[i] = str[start+i];
		i++;
	}
	ret_list[i] = '\0';
}

void main_logic(char **ret_list, char *str, char *charset)
{
	int start;
	int end;
	int word;

	start = 0;
	word = 0;

	while (str[start] != '\0')
	{
		if ((is_seperator(str[start], charset) == 1))
		{
			start++;
		}
		else 
		{
			end = 0;
			while (is_seperator(str[start + end],charset) == 0)
				end++; 
			ret_list[word] = (char *) malloc ((end + 1)*sizeof(char));
			ft_copy(str,ret_list[word],start,end);
			start = start + end;
			word++;
		}
	}
}
char	**ft_split(char *str, char *charset)
{
	char	**ret_list;
	int		words;
	int		i;

	words = count_words(str,charset);
	ret_list = (char **) malloc ((words + 1) *sizeof(char *));
	ret_list[words] = 0;
	main_logic(ret_list,str,charset);

	return (ret_list);
}


int main(int argc, char **argv)
{
	char	**result;
	int i;
	result = ft_split (argv[1],argv[2]);
	
	while (i < 5)
	{
		printf("%s",result[i]);
		printf("%c",'\n');

		i++;
	}
	
	return (0);
}
