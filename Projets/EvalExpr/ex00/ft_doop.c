/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:56:51 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/22 23:17:51 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"
#include "ft_h.h"

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

int		ft_doop(char *n1, char *op, char *n2)
{
	int a;
	int b;

	a = ft_atoi(n1);
	b = ft_atoi(n2);
	return (ft_testop(*op, a, b));
}

int		ft_priocmp(char *op1)
{
	if (ft_strcmp(op1, "+") == 0 || ft_strcmp(op1, "-") == 0)
		return (1);
	if (ft_strcmp(op1, "/") == 0 || ft_strcmp(op1, "*") == 0
			|| ft_strcmp(op1, "%") == 0)
		return (2);
	return (0);
}

int		ft_do_one_op(t_pile **operations, t_pile **valeurs)
{
	char *op;
	char *nb1;
	char *nb2;
	char *nb;

	nb = (char *)malloc(sizeof(char) * 10);
	op = pop(operations);
	nb1 = pop(valeurs);
	nb2 = pop(valeurs);
	ft_strnbr(nb, ft_doop(nb2, op, nb1));
	*valeurs = push(*valeurs, nb);
	return (0);
}
