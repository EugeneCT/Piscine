# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cliew <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 19:00:09 by cliew             #+#    #+#              #
#    Updated: 2023/07/10 19:00:12 by cliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC_DIR	= ./srcs
INC_DIR	= ./includes

SRCS	= $(SRC_DIR)/ft_putchar.c \
	$(SRC_DIR)/ft_swap.c \
	$(SRC_DIR)/ft_putstr.c \
	$(SRC_DIR)/ft_strlen.c \
	$(SRC_DIR)/ft_strcmp.c

OBJS	= $(SRCS:.c=.o)

NAME	= libft.a

CC	= cc
CFLAGS	= -Wall -Wextra -Werror

AR	= ar rcs

RM	= rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
