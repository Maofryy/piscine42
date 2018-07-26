/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 13:12:07 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 13:33:09 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		{
			ft_putnbr(-21474);
			ft_putnbr(83648);
		}
	if (nb < 0)
		nb *= -1;
	if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (1);
	}
	int i = 1;
	while (i < 10)
	{
		ft_putchar('0' + i);
		write(1, " x ", 3);
		ft_putnbr(atoi(av[1]));
		write(1, " = ", 3);
		ft_putnbr(i++ * atoi(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
