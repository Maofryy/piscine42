/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:52:22 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/12 17:03:35 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_generic(void)
{
	char	*str;
	int		i;

	i = 0;
	str = "Tut tut ; Tut tut\n";
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
