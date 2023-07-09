/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lteng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:31:50 by lteng             #+#    #+#             */
/*   Updated: 2023/07/08 18:31:52 by lteng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

unsigned int	ft_size_read(int fd, unsigned int size_max)
{
	char	buf;

	while (read(fd, &buf, 1) > 0)
	{
		size_max++;
	}
	return (size_max);
}

char	*ft_open(char *dict)
{
	int				fd;
	char			*dict_str;
	unsigned int	size_max;

	size_max = 0;
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (NULL);
	size_max = ft_size_read(fd, size_max);
	close(fd);
	dict_str = malloc(sizeof(char) * (size_max + 1));
	dict_str[size_max] = 0;
	if (!dict_str)
		return (NULL);
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (NULL);
	read(fd, dict_str, size_max);
	close(fd);
	return (dict_str);
}
