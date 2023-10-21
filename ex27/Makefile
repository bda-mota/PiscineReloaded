# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 17:46:28 by bda-mota          #+#    #+#              #
#    Updated: 2023/10/11 13:48:45 by bda-mota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CFILES = ft_display_file.c

all: ${NAME}

${NAME}:
	gcc -c -Wall -Werror -Wextra $(CFILES)
	gcc -o $(NAME) ft_display_file.o

clean:
	/bin/rm -f ft_display_file.o

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
