/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:02:44 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/11 00:28:28 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
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
		return (tab);
	}
	else
	{
		return (NULL);
	}
}
