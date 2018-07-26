/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:36:21 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/13 13:58:36 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_power(nb, power - 1));
}

unsigned int	ft_active_bits(int value)
{
	int n;

	n = 0;
	if (value <= 0 || value >= 214748648)
		return (0);
	while (value >= ft_power(2, n))
		n++;
	return (n);
}
