/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:50:10 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/22 22:57:43 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H
# include <stdlib.h>

typedef	struct		s_pile
{
	char			*data;
	struct s_pile	*next;
}					t_pile;
char				*ft_strdup(char *src);
t_pile				*push(t_pile *pile, char *data);
char				*pop(t_pile **pile);
int					empty(t_pile *pile);

#endif
