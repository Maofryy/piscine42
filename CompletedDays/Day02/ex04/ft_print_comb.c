/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:42:41 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/05 19:14:19 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_put3char(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0' - 1;
	while (a++ <= '9')
	{
		b = a;
		while (b++ <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_put3char(a, b, c);
				if (a != '7' || b != '8' || c != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
		}
	}
}
