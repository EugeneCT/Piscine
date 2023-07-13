/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:22:50 by cliew             #+#    #+#             */
/*   Updated: 2023/06/30 12:45:52 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int to_int(char *str)
{
	int i = 0;
	int res = 0;
	while (str[i] != '\0')
	{
		res = res * 10;
		res = res + str[i] - '0';
		i++;
	}
	return res;
}

int main(int argc, char *argv[])
{
	int a = to_int(argv[1]);
	int b = to_int(argv[2]);
	int c = a + b;
	printf("%d",c);
}
