/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 09:30:59 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/08 09:42:42 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_count = 0;

int		ft_test(int *lignes, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (lignes[col] == lignes[i] || col - i == lignes[col] - lignes[i])
			return (0);
		if (col - i == lignes[i] - lignes[col])
			return (0);
		i++;
	}
	return (1);
}

void	ft_boucle(int *lignes, int col)
{
	int i;

	i = 0;
	if (col == 8)
	{
		g_count++;
		return ;
	}
	while (i < 8)
	{
		lignes[col] = i;
		if (ft_test(lignes, col))
		{
			ft_boucle(lignes, col + 1);
		}
		i++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int lignes[8];

	ft_boucle(lignes, 0);
	return (g_count);
}
