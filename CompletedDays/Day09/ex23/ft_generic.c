/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:52:29 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/13 15:53:11 by mbenhass         ###   ########.fr       */
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
