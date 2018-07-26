/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 20:23:44 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/22 23:32:33 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include "ft_fonctions.h"

t_pile *g_operations = NULL;
t_pile *g_valeurs = NULL;

int		ft_1(int i)
{
	while (!empty(g_operations) &&
			ft_strcmp(g_operations->data, "(") != 0)
		ft_do_one_op(&g_operations, &g_valeurs);
	pop(&g_operations);
	return (i + 1);
}

void	ft_2(char *val)
{
	while (!empty(g_operations) &&
			(ft_priocmp(g_operations->data) >= ft_priocmp(val)))
		ft_do_one_op(&g_operations, &g_valeurs);
	g_operations = push(g_operations, val);
}

void	eval_expr2(char *str, int *i, char *val)
{
	if (str[*i] == '(')
	{
		g_operations = push(g_operations, "(");
		*i += 1;
	}
	if (str[*i] == ')')
		*i = ft_1(*i);
	if (str[*i] == '+' || str[*i] == '-' || str[*i] == '*' ||
			str[*i] == '/' || str[*i] == '%')
	{
		val[0] = str[*i];
		*i += 1;
		val[1] = '\0';
		ft_2(val);
	}
}

int		eval_expr(char *str)
{
	int		i;
	int		j;
	char	*val;

	i = 0;
	val = (char *)malloc(sizeof(char) * 10);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		j = 0;
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
				val[j++] = str[i++];
			g_valeurs = push(g_valeurs, val);
		}
		eval_expr2(str, &i, val);
	}
	while (!empty(g_operations))
		ft_do_one_op(&g_operations, &g_valeurs);
	return (ft_atoi(g_valeurs->data));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
