/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 00:51:26 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/26 02:36:22 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_lower_char(char c)
{
	if (c >= 'A' && c <= 'Z')
			c += 32;
	return (c);
}

int		ft_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_power(nb, power - 1));
}

int		ft_index(char c, int str_base)
{
	char ref[] = "0123456789ABCDEF";
	char base[str_base];
	int i = -1;
	while (++i < str_base)
		base[i] = ref[i];
	i = 0;
	while (base[i])
	{
		if (c == base[i] || c == ft_lower_char(base[i]))
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int nb = 0;
	int value = 0;
	int size = 0;
	int res = 0;
	//gestion d'erreurs

	if (str_base < 0 || str_base > 16)
		return (0);
	while (str[i])//Calcul la taille totale du string
		i++;
	i--;
	size = i;
	while (i > 0) //On part du debut du nombre
	{
		value = ft_index(str[i], str_base);
		if (value == -1)
			return (0);
		res += value * ft_power(str_base, size - i);
		i--;
	}
	if (*str == '-')
		res *= -1;
	else
	{
		value = ft_index(str[i], str_base);
		if (value == -1)
			return (0);
		res += value * ft_power(str_base, size - i); 

	}
	return (res);
}

int main(int a, char **v)
{
	a = ft_atoi_base(v[1], atoi(v[2]));
	//a = ft_power(2, 16);
	printf("%d\n", a);
	return (0);
}
