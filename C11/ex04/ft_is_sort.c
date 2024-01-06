/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:20:35 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/21 12:03:43 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_check_sort(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}
*/
int	ft_is_asc_sort(int *tab, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_des_sort(int *tab, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (!(ft_is_asc_sort(tab, length, f)) 
		&& !(ft_is_des_sort(tab, length, f)))
		return (0);
	return (1);
}
/*
int	main(void)
{
	int	tab[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	printf("%d\n", ft_is_sort(tab, 10, ft_check_sort));
	return (0);
}
*/