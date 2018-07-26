/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 09:59:04 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/15 22:33:10 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printtab(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 8)
	{
		while (j <= 7)
		{
			ft_putchar(tab[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar(tab[i][j]);
		j = 0;
		ft_putchar('\n');
		i++;
	}
}
