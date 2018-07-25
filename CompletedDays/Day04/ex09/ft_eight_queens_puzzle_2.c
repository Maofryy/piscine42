/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:42:48 by mbenhass          #+#    #+#             */
/*   Updated: 2018/07/09 15:49:17 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
	int j;

	i = 0;
	if (col == 8)
	{
		j = 0;
		while (j < 8)
			ft_putchar('0' + lignes[j++]);
		ft_putchar('\n');
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

void	ft_eight_queens_puzzle_2(void)
{
	int lignes[8];

	ft_boucle(lignes, 0);
}
