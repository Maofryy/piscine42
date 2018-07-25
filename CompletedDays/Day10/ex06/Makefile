# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 09:16:51 by mbenhass          #+#    #+#              #
#    Updated: 2018/07/17 22:06:56 by mbenhass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard *.c)

FLAGS = -Wall -Wextra -Werror

NAME = do-op

OBJ = $(SRC:.c=.o)

all : do-op

do-op : $(SRC)
	gcc -o $@ $^ $(FLAGS) 

clean :
	/bin/rm -rf *.o *.gch

fclean : clean
	/bin/rm -rf do-op

re : fclean all
