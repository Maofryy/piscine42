/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:51:34 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/22 22:55:44 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char		*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(char) * i);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

t_pile		*push(t_pile *pile, char *data)
{
	t_pile *tmp;

	tmp = (t_pile*)malloc(sizeof(t_pile));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->data = ft_strdup(data);
	tmp->next = pile;
	pile = tmp;
	return (pile);
}

char		*pop(t_pile **pile)
{
	char	*temp;
	t_pile	*tmp;

	tmp = *pile;
	temp = ft_strdup((*pile)->data);
	*pile = (*pile)->next;
	tmp = NULL;
	free(tmp);
	return (temp);
}

int			empty(t_pile *pile)
{
	return (pile == NULL ? 1 : 0);
}
