/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_argv[1].c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 00:23:13 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 00:47:59 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2 || argv[1][0] == '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	while(argv[1][i])
	{
		while(is_space(argv[1][i]) && argv[1][i])
			i++;
		while(!is_space(argv[1][i]) && argv[1][i])
			ft_putchar(argv[1][i++]);
		while(is_space(argv[1][i]) && argv[i])
			i++;
		if (argv[1][i])
		{
			ft_putchar(' ');
			ft_putchar(' ');
			ft_putchar(' ');
		}
	}
	ft_putchar('\n');
	return (0);
}
