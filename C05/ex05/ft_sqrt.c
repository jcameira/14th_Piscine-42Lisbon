/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouffet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 22:45:58 by vtouffet          #+#    #+#             */
/*   Updated: 2017/07/07 09:10:10 by vtouffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	odd;

	i = 1;
	odd = 0;
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		odd++;
	}
	if (nb == 0)
		return (odd);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(64));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(81));
	printf("%d\n", ft_sqrt(49));
	printf("%d\n", ft_sqrt(121));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(21));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(2209));
	return (0);
}
*/