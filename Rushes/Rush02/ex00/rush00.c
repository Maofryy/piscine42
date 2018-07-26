/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:25:57 by rle-ru            #+#    #+#             */
/*   Updated: 2018/07/22 10:44:29 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void	topbot00(char *str, int x)
{
	int	i;

	i = 0;
	ft_strcat(str, 'o');
	if (x != 1)
	{
		while (++i < (x - 1))
			ft_strcat(str, '-');
		ft_strcat(str, 'o');
		ft_strcat(str, '\n');
	}
	if (x == 1)
		ft_strcat(str, '\n');
}

int		rush00(char *str, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		return (0);
	topbot00(str, x);
	if (y != 1)
	{
		while (++i < y - 1)
		{
			ft_strcat(str, '|');
			while (++j < (x - 1))
				ft_strcat(str, ' ');
			j = 0;
			if (x != 1)
				ft_strcat(str, '|');
			ft_strcat(str, '\n');
		}
		i = 0;
		topbot00(str, x);
	}
	ft_strcat(str, '\0');
	return (0);
}
