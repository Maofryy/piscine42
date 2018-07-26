/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 02:02:56 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/13 02:13:55 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	while (factory[i] != NULL)
	{
		while (factory[i][j] != NULL)
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
}
