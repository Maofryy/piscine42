/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 02:18:26 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/13 02:40:52 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	g_flighttime = 0;

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (g_flighttime);
	if (base % 2 == 0)
		ft_collatz_conjecture(base / 2);
	else
		ft_collatz_conjecture(3 * base + 1);
	g_flighttime++;
	return (g_flighttime);
}
