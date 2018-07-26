/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonctions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 11:42:03 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/15 22:13:17 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FONCTIONS_H
# define FT_FONCTIONS_H
# include <unistd.h>
# include <stdlib.h>

char	**ft_createtab(char **argv);
void	ft_printtab(char **argv);
int		ft_solve(char **tab);
int		ft_loop(char **tab, int i, int j);
int		ft_loop2(char **tab, char val, int i, int j);
int		ft_loop3(char **tab, char val, int i, int j);
int		ft_test(char **tab, char nb, int i, int j);
int		ft_recherche_bloc(char **tab, char nb, int i, int j);
int		ft_recherche_vertical(char **tab, char nb, int i);
int		ft_recherche_horizontal(char **tab, char nb, int j);
int		ft_argvalid(char **argv);
int		ft_verifs_arg(int argc, char **argv);
int		ft_strlen(char **str, int j);
int		ft_isvalid(char **tab);
void	ft_putchar(char c);

#endif
