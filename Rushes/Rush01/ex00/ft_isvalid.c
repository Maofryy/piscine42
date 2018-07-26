/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 13:58:29 by cseguier          #+#    #+#             */
/*   Updated: 2018/07/15 22:33:34 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

int	ft_isvalid(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < 9)
	{
		while (i < 9)
		{
			if (tab[j][i] > '9' && tab[j][i] < '0' && tab[j][i] != '.')
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

int	ft_strlen(char **str, int j)
{
	int i;

	i = 0;
	while (str[j][i])
		i++;
	if (i != 9)
		return (0);
	return (i);
}

int	ft_argvalid(char **argv)
{
	int	j;

	j = 1;
	while (j < 10)
	{
		if (ft_strlen(argv, j) != 9)
			return (0);
		j++;
	}
	return (1);
}

int	ft_verifs_arg(int argc, char **argv)
{
	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_argvalid(argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}
