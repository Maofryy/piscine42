/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:41:56 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/22 17:42:38 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"
#define BUFF_SIZE 65535

int		*calcsize(char *str, int *tab)
{
	int		i;
	int		raw;
	int		col;

	i = 0;
	raw = 0;
	col = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			raw++;
		}
		if (raw == 0)
			col++;
		i++;
	}
	tab[0] = raw;
	tab[1] = col;
	return (tab);
}

void	run_cmp(char *str, int *size, int *res)
{
	int		(*tab[5]) (char *str, int x, int y);
	int		i;
	char	temp[size[0] * (size[1] + 1) + 1];

	tab[0] = rush00;
	tab[1] = rush01;
	tab[2] = rush02;
	tab[3] = rush03;
	tab[4] = rush04;
	res[0] = 0;
	i = 0;
	while (i < 5)
	{
		tab[i](temp, size[1], size[0]);
		if (ft_strcmp(str, temp) == 0 || ft_strcmp(str, temp) == 111)
			res[i] = 1;
		i++;
		temp[0] = '\0';
	}
}

int		final_print(int *size, int i, int smth, int *res)
{
	if (res[i] == 1 || (size[0] == 0 && size[1] == 0))
	{
		if (i <= 4 && smth > 0)
			ft_putstr(" || ");
		ft_putstr("[colle-0");
		ft_putnbr(i);
		ft_putstr("] [");
		ft_putnbr(size[1]);
		ft_putstr("] [");
		ft_putnbr(size[0]);
		ft_putchar(']');
		smth++;
	}
	return (smth);
}

void	show_result(int *size, int *res)
{
	int i;
	int smth;

	smth = 0;
	i = 0;
	while (i < 5)
	{
		i++;
	}
	i = 0;
	while (i < 5)
	{
		smth = final_print(size, i, smth, res);
		i++;
	}
	if (smth == 0)
		ft_putstr("aucune");
}

int		main(void)
{
	int		size[2];
	char	str[BUFF_SIZE];
	int		res[5];
	int		i;
	char	ch[2];

	res[0] = 0;
	i = 0;
	while (read(0, &ch, 1) > 0)
		ft_strcat(str, *ch);
	calcsize(str, size);
	if (size[0] == 0 || size[1] == 0)
	{
		size[0] = 0;
		size[1] = 0;
		while (i < 5)
			res[i++] = 1;
	}
	else
		run_cmp(str, size, res);
	show_result(size, res);
	ft_putchar('\n');
	return (0);
}
