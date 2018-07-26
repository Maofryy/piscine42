/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 11:52:54 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 12:18:47 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

int	is_char_present(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);;
		str++;
	}
	return (0);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 1;
	char ref[128];

	ref[0] = '\0';
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	while (k < 3)
	{
		i = 0;
		while (av[k][i])
		{
			if (!is_char_present(av[k][i], ref) && av[k][i])
			{
				ft_putchar(av[k][i]);
				ref[j] = av[k][i];
				ref[j + 1] = '\0';
				j++;
			}
			i++;
		}
		k++;
	}
	ft_putchar('\n');
	return (0);
}
