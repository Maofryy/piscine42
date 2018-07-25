/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 00:52:13 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/19 09:33:19 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char					*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if ((dest = (char*)malloc(sizeof(char) * i)) == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*temp;
	int					i;

	i = 0;
	if ((temp = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1))) == NULL)
		return (NULL);
	while (i < ac)
	{
		temp[i].size_param = ft_strlen(av[i]);
		temp[i].str = &av[i][0];
		if ((temp[i].copy = ft_strdup(av[i])) == NULL)
			return (NULL);
		temp[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	temp[i].str = 0;
	return (temp);
}
