# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 21:44:08 by mbenhass          #+#    #+#              #
#    Updated: 2018/07/22 17:03:22 by mbenhass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.c)

FLAGS = -Wall -Wextra -Werror

HEAD = ./includes/

NAME = colle-2

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	gcc $(FLAGS) -I $(HEAD) -o $@ $^

%.o: %.c
	gcc $(FLAGS) -I $(HEAD) -o $@ -c $<

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
