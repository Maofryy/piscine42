/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 15:30:33 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/08 16:19:53 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb > 12))
		return (0);
	else if ((nb == 1) || (nb == 0))
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
