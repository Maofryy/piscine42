/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 17:39:41 by rle-ru            #+#    #+#             */
/*   Updated: 2018/07/21 22:18:23 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH00_H
# define RUSH00_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putnbr(int nb);
int		rush00(char *str, int x, int y);
int		rush01(char *str, int x, int y);
int		rush02(char *str, int x, int y);
int		rush03(char *str, int x, int y);
int		rush04(char *str, int x, int y);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char src);
int		ft_strcmp(char *s1, char *s2);

#endif
