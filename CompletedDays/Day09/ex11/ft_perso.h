/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:23:42 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/13 12:30:15 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_THE_WORLD 1

typedef struct	s_perso
{
	char	*name;
	int		life;
	int		age;
	int		profession;
}				t_perso;

#endif
