/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:10:36 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 11:06:00 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	if (c == '\t' || c == ' ' || /*c == '\n' ||*/ c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	
	//Checker si pas de parametres
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i])
	{
		while (is_space(av[1][i]) && av[1][i])
			i++;
		while (!is_space(av[1][i]) && av[1][i])
		{
			if (j != 0)
			{
				ft_putchar(av[1][i]);
				flag = 1;
			}
			i++;
		}
		if (flag == 1)
			ft_putchar(' ');
		j++;
	}
	j = 0;
	i = 0;
	while (av[1][i])
	{
		while (is_space(av[1][i]) && av[1][i])
			i++;
		while (!is_space(av[1][i]) && av[1][i])
		{
			if (j == 0)
				ft_putchar(av[1][i]);
			i++;
		}
		j++;
	}
	ft_putchar('\n');
	return (0);
}
