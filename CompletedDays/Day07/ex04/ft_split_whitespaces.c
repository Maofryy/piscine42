/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 09:09:44 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/14 01:32:22 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_delimiter(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\t'))
		return (1);
	return (0);
}

int		count_words(char *str)
{
	int i;
	int j;
	int words;

	i = 0;
	j = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (is_delimiter(str[i]) == 0 && str[i])
		{
			i++;
			j = 1;
		}
		if (j == 1)
		{
			words++;
			j = 0;
		}
		if (str[i] != '\0')
			i++;
	}
	return (words);
}

int		wordlen(char *str, int index)
{
	int size;

	size = 0;
	while (is_delimiter(str[index]) == 0 && str[index])
	{
		size++;
		index++;
	}
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	int			i;
	int			j;
	int			k;
	char		**tab;

	i = 0;
	j = 0;
	if ((tab = malloc(sizeof(char*) * (count_words(str) + 1))) == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		while (is_delimiter(str[i]) == 1)
			i++;
		if (str[i] != '\0')
		{
			k = 0;
			if ((tab[j] = malloc(sizeof(char) * (wordlen(str, i) + 1))) == 0)
				return (NULL);
			while (is_delimiter(str[i]) == 0 && str[i])
				tab[j][k++] = str[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}
