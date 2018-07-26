/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 12:25:56 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 12:38:05 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	if (c == ' ' || c == '\t') //t n r v f ' '
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int res;
	int sign = 1;

	res = 0;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (int)*str - 48;
		str++;
	}
	return (sign * res);
}
#include <stdio.h>
int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%d\n", ft_atoi(av[1]));
	return (0);
}
