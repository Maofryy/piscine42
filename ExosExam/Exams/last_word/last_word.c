/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:14:58 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 14:28:25 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i])
		i++;
	i--;
	while (is_space(av[1][i]) && i >= 0)
		i--;
	while (!is_space(av[1][i]) && i >= 0)
		i--;
	i++;
	while (!is_space(av[1][i]) && av[1][i])
			ft_putchar(av[1][i++]);
	ft_putchar('\n');
	return (0);
}
