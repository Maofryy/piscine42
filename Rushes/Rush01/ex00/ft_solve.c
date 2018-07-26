/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 13:34:34 by afonck            #+#    #+#             */
/*   Updated: 2018/07/15 22:13:45 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

int		g_count = 0;
int		g_print = 0;

int		ft_loop3(char **tab, char val, int i, int j)
{
	while (val <= '9')
	{
		if (ft_loop2(tab, val, i, j))
			return (g_print);
		val++;
	}
	tab[i][j] = '.';
	return (0);
}

int		ft_loop(char **tab, int i, int j)
{
	char val;

	val = '1';
	if (tab[i][j] != '.')
	{
		if (j == 8)
		{
			if (i == 8)
			{
				g_count++;
				return (g_print);
			}
			else if (ft_loop(tab, i + 1, 0))
				return (g_print);
		}
		else
			return (ft_loop(tab, i, j + 1));
	}
	return (ft_loop3(tab, val, i, j));
}

int		ft_loop2(char **tab, char val, int i, int j)
{
	if (ft_test(tab, val, i, j))
	{
		tab[i][j] = val;
		if (j == 8)
		{
			if (i == 8)
			{
				g_count++;
				return (g_print);
			}
			else if (ft_loop(tab, i + 1, 0))
				return (g_print);
		}
		else
		{
			if (ft_loop(tab, i, j + 1))
				return (g_print);
		}
	}
	return (0);
}

int		ft_solve(char **tab)
{
	ft_loop(tab, 0, 0);
	if (g_count != 1)
		return (0);
	else
	{
		g_print = 1;
		ft_loop(tab, 0, 0);
		return (1);
	}
}
