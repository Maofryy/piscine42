/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wav[1].c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 11:10:50 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 11:30:03 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t') //t n r v f
		return (1);
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i])
		i++;
	i--;
	while(i > 0)
	{
		while(is_space(av[1][i]) && i >= 0)
			i--;
		while (!is_space(av[1][i]) && i >= 0)
			i--;
		j = i + 1;
		while(!is_space(av[1][j]) && av[1][j])
			ft_putchar(av[1][j++]);
		if (i >= 0)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}
