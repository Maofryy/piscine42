/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:34:01 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/13 13:06:41 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

t_bool	close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
	return (TRUE);
}

t_bool	open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
	return (TRUE);
}

t_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state == OPEN);
}

t_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state == CLOSE);
}
