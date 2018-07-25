/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 12:19:09 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/07 17:36:01 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		high;

	i = 0;
	high = 0;
	while (str[high] != '\0')
	{
		high++;
	}
	high--;
	while (i < high)
	{
		tmp = str[i];
		str[i] = str[high];
		str[high] = tmp;
		high--;
		i++;
	}
	return (str);
}
