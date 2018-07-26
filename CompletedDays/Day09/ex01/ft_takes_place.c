/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:48:55 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/12 18:58:49 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		ft_calc(int hour)
{
	if (hour % 12 != 0)
	{
		if (hour > 12)
			return ('P');
		else
			return ('A');
	}
	else if (hour == 12)
		return ('P');
	else if (hour == 0)
		return ('A');
	return ('P');
}

void		ft_takes_place(int hour)
{
	char	c1;
	char	c2;
	int		h1;
	int		h2;

	if (hour % 12 != 0)
		h1 = hour % 12;
	else
		h1 = 12;
	if ((hour + 1) % 12 != 0)
		h2 = hour % 12;
	else
		h2 = 12;
	c1 = ft_calc(hour);
	c2 = ft_calc(hour + 1);
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	printf(" %d.00 %c.M. AND %d.00 %c.M.\n", h1, c1, h2, c2);
}
