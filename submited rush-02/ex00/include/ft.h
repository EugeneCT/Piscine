/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:25:55 by hmoulard          #+#    #+#             */
/*   Updated: 2022/08/27 17:20:58 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include<stdlib.h>
# include<stdint.h>
# include<unistd.h>
# include<fcntl.h>

typedef unsigned __int128	t_int;

typedef struct s_ch
{
	struct s_ch		*next;
	char			*line;
	t_int			value;
}	t_ch;

int				ft_strlen(char *c);
int				ft_error(int i);
int				ft_is_valid(int i);
int				check_ext(char *str, char *to_find);
int				ft_is_digit(char *str);
int				ft_check_arg(int argc, char **argv, char **path, t_int *value);
void			ft_todo(t_ch **res, t_int *n, t_int *t, t_ch *begin_list);
void			ft_push_back(t_ch **begin_list, t_ch *elem);
void			ft_push_front(t_ch **chain, t_int value, char *line);
void			ft_bigfree_res(t_ch *chain);
void			ft_bigfree_dict(t_ch *chain);
void			ft_bigfree2(char **splited_char);
void			ft_putstr(char *c);
void			ft_printchain(t_ch *chain);
char			*ft_is_printable(char *str);
char			*ft_search(t_ch *begin_list, t_int value);
char			*ft_open(char *dict);
char			*ft_strdup(char *src);
char			**ft_split(char *str, char *charset);
t_ch			*create_elem(t_int value, char *line);
t_ch			*ft_create_dict(char *content);//
t_ch			*ft_get_res(t_int nbr, t_ch *begin_list);
t_int			ft_atoi(char *str);

#endif
