/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:52:59 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/20 17:49:05 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/*
int	multiply_by_2(int i)
{
	int	j;

	j = i * 2;
	return (j);
}
*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_tab;
	int	i;

	i = 0;
	new_tab = malloc(sizeof (int) * length);
	while (i < length)
	{
		new_tab[i] = f(tab[i]);
		i++;
	}
	return (new_tab);
}
/*
int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	*new_tab;
	int	i;

	new_tab = ft_map(tab, 10, multiply_by_2);
	i = 0;
	while (i < 10)
		printf("%d\n", new_tab[i++]);
	return (0);
}
*/