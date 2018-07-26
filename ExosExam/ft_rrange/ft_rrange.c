/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 13:33:40 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 13:50:36 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int i = end;
	int *tab;
	int size;
	int dir;
	
	if (end >= start)
	{
		dir = -1;
		size = end - start + 1;
	}
	else
	{
		dir = 1;
		size = start - end + 1;
	}
	tab = malloc(sizeof(int) * size);
	while (i - dir!= start)
	{
		tab[i - end] = i;
		printf("tab : %d\n",tab[i - end]);
		i += dir;
	}
	return (tab);
}
