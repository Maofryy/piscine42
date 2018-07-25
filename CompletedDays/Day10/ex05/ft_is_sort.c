/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 17:37:44 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/19 19:17:21 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int count;
	int count0;

	i = 1;
	count = 0;
	count0 = 0;
	if (length < 2)
		return (1);
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) == 0)
			count0++;
		else if (f(tab[i - 1], tab[i]) > 0)
			count++;
		else
			count--;
		i++;
	}
	return ((count == length - 1 - count0) || (-count == length - 1 - count0));
}
