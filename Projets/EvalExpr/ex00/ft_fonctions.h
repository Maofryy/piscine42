/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonctions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:54:35 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/22 23:18:02 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FONCTIONS_H
# define FT_FONCTIONS_H
# include <unistd.h>
# include "ft_h.h"

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_strnbr(char *str, int nb);
char	*ft_strcat(char *dest, char src);
int		ft_atoi(char *str);
int		ft_doop(char *n1, char *op, char *n2);
int		ft_strcmp(char *s1, char *s2);
int		ft_do_one_op(t_pile **operations, t_pile **valeurs);
int		ft_priocmp(char *op1);

#endif
