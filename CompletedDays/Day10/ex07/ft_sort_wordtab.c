/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 00:48:37 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/19 12:50:47 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sorttab(char **tab, int size)
{
	int		i;
	int		max;
	char	*tmp;

	i = 0;
	max = 0;
	if (size > 1)
	{
		while (i < size)
		{
			if (ft_strcmp(tab[i], tab[max]) > 0)
				max = i;
			i++;
		}
		tmp = tab[max];
		tab[max] = tab[size - 1];
		tab[size - 1] = tmp;
		ft_sorttab(tab, size - 1);
	}
	return ;
}

void	ft_sort_wordtab(char **tab)
{
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (tab[i] != 0)
	{
		size++;
		i++;
	}
	ft_sorttab(tab, size);
}
