SRCS	= src/checks.c src/create_elem.c src/ft_bigfree.c src/ft_create_dict.c src/ft_get_res.c src/ft_open.c src/ft_push.c src/ft_split.c src/general.c src/general2.c src/main.c

NAME	= rush-02

OBJS	= ${SRCS:.c=.o}

HEADERS = includes/ft.h

CC	= gcc

RM	= rm -f

FLAGS	= -Wall -Wextra -Werror 

all :
	${CC} ${FLAGS} -g -I ${HEADERS} ${SRCS} -o ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : re fclean clean all
