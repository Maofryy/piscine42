/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 00:55:41 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/17 15:21:22 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcatn(char *dest, char *src)
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
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
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

int		calc_size(int size, char **tab)
{
	int i;
	int j;
	int res;

	i = 0;
	j = 0;
	res = 0;
	while (i < size)
	{
		while (tab[i][j] != '\0')
		{
			res++;
			j++;
		}
		res--;
		i++;
	}
	return (res);
}

char	*ft_concat_params(int argc, char **argv)
{
	char		*temp;
	int			i;
	int			totalsize;

	totalsize = calc_size(argc, argv);
	temp = (char*)malloc(sizeof(char) * (totalsize + 1));
	i = 1;
	if (argc == 1)
		return (temp);
	while (i < argc - 1)
	{
		ft_strcatn(temp, argv[i]);
		i++;
	}
	ft_strcat(temp, argv[i]);
	ft_strcat(temp, "\0");
	return (temp);
}
