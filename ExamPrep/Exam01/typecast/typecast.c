/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typecast.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliew <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:27:46 by cliew             #+#    #+#             */
/*   Updated: 2023/06/30 14:41:52 by cliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main(int argc, char** argv)
{
	char ch[] = "48";
	int* num = (int*) ch;

	printf("%d",*num);
}
