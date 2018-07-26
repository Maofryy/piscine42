/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 17:03:37 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 17:14:56 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_pgcd(int a, int b)
{
	if (a % b == 0)
		return (b);

	return (ft_pgcd(b, a % b));
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	printf("%d\n",ft_pgcd(atoi((av[1])), atoi(av[2])));
	return (0);
}
