/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_res.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lteng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:30:57 by lteng             #+#    #+#             */
/*   Updated: 2023/07/08 18:30:59 by lteng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft.h"

t_ch	*get_res(t_int nbr, t_ch *begin_list)
{
	t_ch	*res;
	t_int	ten;

	res = NULL;
	ten = 1;
	while (nbr)
	{
		if (nbr % 100 <= 20 && nbr % 100 > 0)
		{
			ft_push_front(&res, nbr, ft_search(begin_list, (nbr % 100)));
			nbr = nbr / 100;
			if (nbr % 10 != 0)
			{
				ft_push_front(&res, nbr, ft_search(begin_list, 100));
				ft_push_front(&res, nbr, ft_search(begin_list, nbr % 10));
			}
			ten *= 1000;
			nbr /= 10;
		}
		else
			ft_todo(&res, &nbr, &ten, begin_list);
		if (nbr % 10 != 0 || nbr % 100 != 0 || nbr % 1000 != 0)
			ft_push_front(&res, nbr, ft_search(begin_list, ten));
	}
	return (res);
}

void	ft_todo(t_ch **res, t_int *n, t_int *t, t_ch *begin_list)
{
	if (*n % 10 != 0)
		ft_push_front(res, *n, ft_search(begin_list, *n % 10));
	*n = *n / 10;
	if (*n % 10 != 0)
		ft_push_front(res, *n, ft_search(begin_list, (*n % 10) * 10));
	*n = *n / 10;
	if (*n % 10 != 0)
	{
		ft_push_front(res, *n, ft_search(begin_list, 100));
		ft_push_front(res, *n, ft_search(begin_list, *n % 10));
	}
	*t = *t * 1000;
	*n = *n / 10;
}

t_ch	*ft_get_res(t_int nbr, t_ch *begin_list)
{
	t_ch	*res;

	if (nbr == 0)
	{
		if (ft_search(begin_list, nbr))
		{
			res = create_elem(nbr, ft_search(begin_list, nbr));
			return (res);
		}
		else
			return (NULL);
	}
	return (get_res(nbr, begin_list));
}
