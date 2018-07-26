/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 21:14:23 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/27 00:56:22 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat1(char *str, char c)
{
	char *tmp;
	int i = 0;
	while (str[i])
		i++;
	tmp = malloc(sizeof(char) *(i + 2));
	i = 0;
	//write(1,&c,1);
	while (str[i])
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = c;
	tmp[i + 1] = '\0';
	free(str);
	return (tmp);
}

void		ft_strnbrbase(int value, int base, char *str)
{
	if (value == -2147483648)
	{
		ft_strnbrbase(-21474, base, str);
		ft_strnbrbase(83648, base, str);
	}
	if (value < 0)
		value *= -1;
	if (value < base)
	{
		if (base <= 10)
		{
			str = ft_strcat1(str, '0' + value);
			printf("%c\n",'0' + value);
		}
		else
			str = ft_strcat1(str, 'A' + value - 10);
	}
	else
	{
		ft_strnbrbase(value / base, base, str);
		ft_strnbrbase(value % base, base, str);
	}
}

char        *ft_itoa_base(int value, int base)
{
	char *str;

	str = malloc(sizeof(char) * 2);
	ft_strnbrbase(value, base, str);
	return (str);
}

int main()
{
	char *str;
	str = ft_itoa_base(8, 2);
	printf("%s\n",str);
	return (0);
}
