# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 13:40:09 by bda-mota          #+#    #+#              #
#    Updated: 2023/10/09 13:17:22 by bda-mota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

/*Create a Makefile that'll compile your libft.a*/
CFILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OFILES = ${CFILES:.c=.o}
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEAD = -I ./includes
NAME = libft.a

${NAME}: ${OFILES}
	ar rc ${NAME} ${OFILES}
	ranlib ${NAME}

.c.o:
	${CC} ${FLAGS} ${HEAD} -c $< -o $@

all: ${NAME}

clean:
	rm -f ${OFILES}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
