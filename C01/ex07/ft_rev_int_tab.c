/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:25:35 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/04 12:11:01 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap_times;
	int	tmp;

	swap_times = size / 2;
	i = 1;
	while (i <= swap_times)
	{
		tmp = tab[i - 1];
		tab[i - 1] = tab[size - i];
		tab[size - i] = tmp;
		i++;
	}
}
/*
int	main(void)
{
	int	size, i, tab[5] = {1, 2, 3, 4, 5};

	size = 5;
	i = 0;
	ft_rev_int_tab(tab, size);
	printf("inverted tab: ");
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
*/
