/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulav[1].c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:13:58 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 16:22:53 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (*av[1])
	{
		if (*av[1] >= 'a' && *av[1] <= 'z')
			ft_putchar(*av[1] - 32);
		else if (*av[1] >= 'A' && *av[1] <= 'Z')
			ft_putchar(*av[1] + 32);
		else
			ft_putchar(*av[1]);
		av[1]++;
	}
	ft_putchar('\n');
	return (0);
}
