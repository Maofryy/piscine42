# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 15:56:16 by mbenhass          #+#    #+#              #
#    Updated: 2018/07/19 19:20:16 by mbenhass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c ./srcs/ft_swap.c
HEAD = ./includes/

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 

LIB = libft.a

all : run

run : 
	gcc -I $(HEAD) -c $(SRC) 
	ar rc $(LIB) $(OBJ)
	ranlib $(LIB)

clean : 
	/bin/rm -rf $(OBJ)

fclean : clean
	/bin/rm -rf $(LIB)

re : fclean all
