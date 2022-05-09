# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctherin <ctherin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 17:54:17 by ctherin           #+#    #+#              #
#    Updated: 2022/05/09 16:02:19 by ctherin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = $(wildcard ft_*.c)

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm -f

CFLAGS = -Wall -Werror -Wextra

.c.o:		
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re