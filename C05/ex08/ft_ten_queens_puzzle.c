/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:03:53 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/14 12:00:07 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_ten_queens_puzzle_test(int table[10], int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (y == table[i] || i + table[i] == x + y || i - table[i] == x - y)
			return (0);
		i++;
	}
	return (1);
}

void	find_solutions(int queen_pos[10], int *sol, int pos)
{
	int	i;
	int	j;

	if (pos == 10)
	{
		*sol += 1;
		j = -1;
		while (++j < 10)
			ft_putchar(queen_pos[j] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (ft_ten_queens_puzzle_test(queen_pos, pos, i))
			{
				queen_pos[pos] = i;
				find_solutions(queen_pos, sol, pos + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		queen_pos[10];
	int		i;
	int		sol;

	i = -1;
	sol = 0;
	while (++i < 10)
		queen_pos[i] = -1;
	find_solutions(queen_pos, &sol, 0);
	return (sol);
}
/*
int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}
*/