/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:23:40 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 17:03:16 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int max = 0;

	if (len < 1 || *tab == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] > tab[max])
			max = i;
		i++;
	}
	return (tab[max]);
}

int main()
{
	int tab[2] = {1, 5};
	printf("%d\n",max(tab, 3));
	return (0);
}
