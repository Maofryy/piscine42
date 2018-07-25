/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 15:17:22 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/17 15:17:24 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = min;
	if (min < max && min >= -2147483648 && max <= 2147483647)
	{
		tab = (int*)malloc(sizeof(int) * (max - min));
		while (i < max)
		{
			tab[i - min] = i;
			i++;
		}
		*range = tab;
		return (max - min);
	}
	else
	{
		*range = NULL;
		return (0);
	}
}
