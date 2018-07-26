/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recherche.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:32:39 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/15 13:22:18 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

int	ft_recherche_horizontal(char **tab, char nb, int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[i][j] == nb)
			return (0);
		i++;
	}
	return (1);
}

int	ft_recherche_vertical(char **tab, char nb, int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (tab[i][j] == nb)
			return (0);
		j++;
	}
	return (1);
}

int	ft_recherche_bloc(char **tab, char nb, int i, int j)
{
	int ver;
	int hor;

	ver = 0;
	hor = 0;
	i = i - i % 3;
	j = j - j % 3;
	while (ver < 3)
	{
		while (hor < 3)
		{
			if (tab[i + ver][j + hor] == nb)
				return (0);
			hor++;
		}
		hor = 0;
		ver++;
	}
	return (1);
}

int	ft_test(char **tab, char nb, int i, int j)
{
	int res;

	res = 0;
	res += ft_recherche_horizontal(tab, nb, j);
	res += ft_recherche_vertical(tab, nb, i);
	res += ft_recherche_bloc(tab, nb, i, j);
	if (res != 3)
		return (0);
	return (1);
}
