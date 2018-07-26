/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 19:42:54 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 20:16:58 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	pgcd(int a, int b)
{
	if (a % b == 0)
		return (b);
	return (pgcd(b, a % b));
}


int main(int ac, char **av)
{
	int i = 2;
	if (ac != 2)
	{
		printf("\n");
		return (0);
	}
	int nb = atoi(av[1]);
	int gcd = 0;
	while (i < nb)
	{
		gcd = pgcd(nb, i);
		if (gcd == i)
		{
			printf("%d*", i);
			nb /= i;
		}
		else
		{
			//nb /= gcd;
			i++;
		}
	}	
	printf("%d\n", nb);
	return (0);
}
