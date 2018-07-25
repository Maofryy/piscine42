/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 00:46:11 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/18 13:42:40 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>
# include <unistd.h>

typedef	struct			s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}						t_stock_par;
int						ft_putchar(char c);
void					ft_putstr(char *src);
void					ft_putnbr(int nb);
void					ft_print_words_tables(char **tab);
char					**ft_split_whitespaces(char *str);
struct s_stock_par		*ft_param_to_tab(int ac, char **av);

#endif
