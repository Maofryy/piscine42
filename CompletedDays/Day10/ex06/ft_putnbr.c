/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 08:58:34 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/16 19:56:19 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(-21474);
		ft_putnbr(83648);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putchar('0' + nb);
		}
	}
}
