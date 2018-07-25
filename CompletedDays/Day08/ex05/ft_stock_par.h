/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 00:46:11 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/18 13:28:51 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

typedef	struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
char				**ft_split_whitespaces(char *str);
char				*ft_strdup(char *src);
void				ft_show_tab(struct s_stock_par *par);
int					ft_putchar(char c);

#endif
