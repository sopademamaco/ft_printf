# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davioliv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 15:47:39 by davioliv          #+#    #+#              #
#    Updated: 2023/08/30 15:15:04 by davioliv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c ft_printchars.c ft_printnbr.c ft_printptr.c ft_printhex.c
OBJS = ${SRC:.c=.o}
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -I .
RM = rm -rf
LIBFT = libft/libft.a
LIBDIR = libft
.o:.c
	cc ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
	make -C ${LIBDIR} all
	cp ${LIBFT} ${NAME}
	ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
	make -C ${LIBDIR} clean
	${RM} ${OBJS}

fclean:	clean
	make -C ${LIBDIR} fclean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
