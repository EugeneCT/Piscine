/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:47:50 by cliew             #+#    #+#             */
/*   Updated: 2023/07/04 20:43:35 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int compute_final_length(char **strs,int size)
{
	int i;
	int count;
	int j;
	
	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		j =0;
		while (strs[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
		count++;
	}
	return (count);
}

void appends(char *appended,char *to_append)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (appended[i]!='\0')
	{
		i++;
	}
	
	while (to_append[j]!='\0')
	{
		appended[i+j] = to_append[j];
		j++;
	}
	appended[i+j] = '\0';
	
}


char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *str_ret;
	int count;

	if (size <1)
	{
		str_ret = (char*) malloc (1);
		return (str_ret);
	

	}
	i =1;
	count = compute_final_length(strs,size);
	str_ret = (char*) malloc (count);
	str_ret[0] = '\0';
	appends(str_ret,strs[0]);
	
	while (i < size)
	{
		appends(str_ret,sep);
		appends(str_ret,strs[i]);
		i++;
	}
	return (str_ret);
}


/*
int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
//	free(result);
}
*/
