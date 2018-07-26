/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:42:21 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/15 13:18:13 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

int		main(int argc, char **argv)
{
	char **tab;

	if (ft_verifs_arg(argc, argv) == 0)
		return (0);
	else
	{
		tab = ft_createtab(argv);
		if (ft_isvalid(tab) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (ft_solve(tab) == 0)
			write(1, "Error\n", 6);
		else
			ft_printtab(tab);
	}
	return (0);
}
