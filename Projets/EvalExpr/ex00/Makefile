# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 09:16:51 by mbenhass          #+#    #+#              #
#    Updated: 2018/07/22 01:48:26 by mbenhass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.c)

FLAGS = -Wall -Wextra -Werror

NAME = eval_expr

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	gcc $(FLAGS) -o $@ $^

%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

clean :
	/bin/rm -rf *.o

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
