/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:12:39 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/08 11:18:13 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int max;
	int tmp;

	i = 0;
	max = 0;
	if (size != 1)
	{
		while (i < size)
		{
			if (tab[i] > tab[max])
			{
				max = i;
			}
			i++;
		}
		tmp = tab[max];
		tab[max] = tab[size - 1];
		tab[size - 1] = tmp;
		ft_sort_integer_table(tab, size - 1);
	}
	return ;
}
