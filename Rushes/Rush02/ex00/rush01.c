/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:21:05 by rle-ru            #+#    #+#             */
/*   Updated: 2018/07/22 11:07:53 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void	top_bot01(int x, int b, char *str)
{
	int	i;

	i = 0;
	if (b == 0)
		ft_strcat(str, '/');
	else
		ft_strcat(str, '\\');
	if (x != 1)
	{
		while (++i < (x - 1))
			ft_strcat(str, '*');
		if (b == 0)
			ft_strcat(str, '\\');
		else
			ft_strcat(str, '/');
		ft_strcat(str, '\n');
	}
	if (x == 1)
		ft_strcat(str, '\n');
}

int		rush01(char *str, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		return (0);
	top_bot01(x, 0, str);
	if (y != 1)
	{
		while (++i < y - 1)
		{
			ft_strcat(str, '*');
			while (++j < (x - 1))
				ft_strcat(str, ' ');
			j = 0;
			if (x != 1)
				ft_strcat(str, '*');
			ft_strcat(str, '\n');
		}
		i = 0;
		top_bot01(x, 1, str);
	}
	ft_strcat(str, '\0');
	return (0);
}
