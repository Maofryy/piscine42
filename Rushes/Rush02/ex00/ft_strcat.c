/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:03:36 by rle-ru            #+#    #+#             */
/*   Updated: 2018/07/21 22:41:49 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char src)
{
	int i;

	i = 0;
	while (dest[i++])
		;
	i--;
	dest[i] = src;
	dest[i + 1] = '\0';
	return (dest);
}
