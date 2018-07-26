/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 13:47:16 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/15 19:40:51 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 != '\0')
			return (match(s1, s2 + 1) || match(s1 + 1, s2));
		else
			return (match(s1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		if (*s1 != '\0')
			return (match(s1 + 1, s2 + 1));
		else
			return (1);
	}
	return (0);
}