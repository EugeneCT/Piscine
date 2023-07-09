# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cliew <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 16:31:25 by cliew             #+#    #+#              #
#    Updated: 2023/07/06 16:38:51 by cliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Werror -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rc libft.a  ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
rm ft_putchar.o ft_putstr.o  ft_strcmp.o ft_strlen.o ft_swap.o

