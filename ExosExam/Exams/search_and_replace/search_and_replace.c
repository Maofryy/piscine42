/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 21:01:58 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 21:12:27 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac != 4 || av[2][1] != '\0' || av[3][1] !='\0')
	{
		ft_putchar('\n');
		return (0);
	}
	char s = av[2][0];
	char r = av[3][0];
	while(av[1][i])
	{
		if (av[1][i] == s)
			ft_putchar(r);
		else
			ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
