/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:23:45 by rle-ru            #+#    #+#             */
/*   Updated: 2018/07/21 19:03:38 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

void	top_bot04(int x, int b, char *str)
{
	int	i;

	i = 0;
	if (b == 0)
		ft_strcat(str, 'A');
	else
		ft_strcat(str, 'C');
	if (x != 1)
	{
		while (++i < (x - 1))
			ft_strcat(str, 'B');
		if (b == 0)
			ft_strcat(str, 'C');
		else
			ft_strcat(str, 'A');
		ft_strcat(str, '\n');
	}
	if (x == 1)
		ft_strcat(str, '\n');
}

int		rush04(char *str, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		return (0);
	top_bot04(x, 0, str);
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
		top_bot04(x, 1, str);
	}
	ft_strcat(str, '\0');
	return (0);
}
