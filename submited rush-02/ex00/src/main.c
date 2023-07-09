/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lteng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:31:20 by lteng             #+#    #+#             */
/*   Updated: 2023/07/08 20:32:00 by somin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

int	main(int argc, char *argv[])
{
	t_ch		*dict;
	t_ch		*res;
	char		*path;
	char		*content;
	t_int		value;

	if (ft_atoi(argv[1]) > 4294967295)
		return (ft_error(1));
	if (ft_check_arg(argc, argv, &path, &value) == 0)
		return (ft_error(1));
	if (ft_check_arg(argc, argv, &path, &value) == -1)
		return (ft_error(2));
	content = ft_open(path);
	if (!content)
		return (ft_error(2));
	dict = ft_create_dict(content);
	if (!dict)
		return (ft_error(2));
	res = ft_get_res(value, dict);
	if (!res)
		return (ft_error(1));
	ft_printchain(res);
	ft_bigfree_dict(dict);
	ft_bigfree_res(res);
	free(content);
	return (0);
}
