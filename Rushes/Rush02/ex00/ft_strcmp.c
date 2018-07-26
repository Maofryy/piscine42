/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:34:40 by rle-ru            #+#    #+#             */
/*   Updated: 2018/07/22 13:05:01 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] == '\0')
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
