/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:27:08 by cliew             #+#    #+#             */
/*   Updated: 2023/06/30 14:10:09 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc,char *argv[])
{
	int count = 0;
	int first_ite = 0;
	int second_ite = 0;
	int i;	
	char str[1000];
	char temp;
	
	for (i = 0; argv[1][i] != '\0' && i < 99; i++) {
            str[i] = argv[1][i];
        }
	while (str[count] != '\0')
	{
		count++;
	}
	count = count -1;

	while (second_ite <= count)
	{
		first_ite = second_ite + 1;
		while (first_ite <= count)
		{
			if (str[second_ite] > str[first_ite])
			{
				temp=str[second_ite];
				str[second_ite] = str[first_ite];
				str[first_ite] = temp;
			}
			first_ite++;
		}
		second_ite++;
	}

	printf("%s",str);

	return (0);
}
