/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:34:20 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/13 13:03:19 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# define CLOSE 1
# define TRUE 1
# define OPEN 0
# include <unistd.h>

typedef	int		t_bool;
typedef struct	s_door
{
	int	state;
}				t_door;
void			ft_putstr(char *str);
ft_bool			close_door(t_door *door);
ft_bool			open_door(t_door *door);
ft_bool			is_door_close(t_door *door);
ft_bool			is_door_open(t_door *door);

#endif
