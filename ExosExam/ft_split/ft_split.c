/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 18:47:55 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 19:41:47 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_space(char c, char *charset)
{
	int i = 0;
	while(charset[i])
	{
		if (c == charset[i++])
			return (1);
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int count = 0;
	int i = 0;

	while(str[i])
	{
		while (is_space(str[i], charset) && str[i])
			i++;
		if (!is_space(str[i], charset) && str[i])
		{
			count++;
			while(!is_space(str[i], charset) && str[i])
				i++;
		}
	}
	return (count);
}

int	word_len(char *str, int i, char *charset)
{
	int count = 0;
	while (is_space(str[i], charset) && str[i])
		i++;
	while(!is_space(str[i], charset) && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int i = 0;
	int j;
	int k;
	char **tab;

	tab = malloc(sizeof(char) * (count_words(str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	while (str[i])
	{
		k = 0;
		tab[j] = malloc(sizeof(char) * (word_len(str, i, charset) + 1));
		if (tab[j] == NULL)
			return (NULL);
		while (is_space(str[i], charset) && str[i])
			i++;
		while (!is_space(str[i], charset) && str[i])
			tab[j][k++] = str[i++];
		tab[j][k] = '\0';
		printf("%s\n", tab[j]);
		j++;
		while (is_space(str[i], charset) && str[i])
			i++;
	}
	tab[j] = 0;
	return (tab);
}
