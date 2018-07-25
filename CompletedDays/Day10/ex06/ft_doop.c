/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:56:51 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/19 19:19:04 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

int		ft_testop(char op, int a, int b)
{
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else if (op == '/')
		return (a / b);
	else if (op == '%')
		return (a % b);
	return (0);
}

int		ft_isvalid(char **argv)
{
	int i;

	i = 0;
	while (argv[2][i])
		i++;
	if (i != 1)
		return (0);
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
		argv[2][0] != '/' && argv[2][0] != '%' && argv[2][1] != '\0')
		return (0);
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (2);
	}
	if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (3);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int valid;
	int a;
	int b;

	valid = ft_isvalid(argv);
	if (argc != 4)
		return (0);
	if (valid == 0)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	else if (valid == 2 || valid == 3)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	ft_putnbr(ft_testop(argv[2][0], a, b));
	ft_putchar('\n');
	return (0);
}
