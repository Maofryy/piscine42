/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 12:39:22 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 13:08:26 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{	write(1, &c, 1);}

char	mirrored(char c)
{
	if (c >= 'a' && c <= 'z')
		return ('a' + ('z' - 'a') - (c - 'a'));
	if (c >= 'A' && c <= 'Z')
		return ('A' + ('Z' - 'A') - (c - 'A'));
	return (c);
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while(av[1][i])
		ft_putchar(mirrored(av[1][i++]));
	ft_putchar('\n');
	return (0);	
}
