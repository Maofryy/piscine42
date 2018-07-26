/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:22:59 by rle-ru            #+#    #+#             */
/*   Updated: 2018/07/21 19:03:08 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void	top_bot03(int x, int b, char *str)
{
	int	i;

	i = 0;
	ft_strcat(str, 'A');
	if (x != 1)
	{
		while (++i < (x - 1))
			ft_strcat(str, 'B');
		if (b == 0)
			ft_strcat(str, 'C');
		ft_strcat(str, '\n');
	}
	if (x == 1)
		ft_strcat(str, '\n');
}

int		rush03(char *str, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		return (0);
	top_bot03(x, 0, str);
	if (y != 1)
	{
		while (++i < y - 1)
		{
			ft_strcat(str, 'B');
			while (++j < (x - 1))
				ft_strcat(str, ' ');
			j = 0;
			if (x != 1)
				ft_strcat(str, 'B');
			ft_strcat(str, '\n');
		}
		i = 0;
		top_bot03(x, 0, str);
	}
	ft_strcat(str, '\0');
	return (0);
}
