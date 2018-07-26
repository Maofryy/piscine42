/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:23:47 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/13 13:30:44 by mbenhass         ###   ########.fr       */
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

int		ft_compact(char **tab, int length)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (i < length)
	{
		if (tab[i])
			tab[size++] = tab[i];
		i++;
	}
	return (size);
}
