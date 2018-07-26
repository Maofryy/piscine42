/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 17:10:57 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/22 22:58:07 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

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

void	ft_strnbr(char *str, int nb)
{
	if (nb == -2147483648)
	{
		ft_strnbr(str, -21474);
		ft_strnbr(str, 83648);
	}
	else
	{
		if (nb < 0)
		{
			ft_strcat(str, '-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_strnbr(str, nb / 10);
			ft_strnbr(str, nb % 10);
		}
		else
			ft_strcat(str, '0' + nb);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strcat(char *dest, char src)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i] = src;
	dest[i + 1] = '\0';
	return (dest);
}
