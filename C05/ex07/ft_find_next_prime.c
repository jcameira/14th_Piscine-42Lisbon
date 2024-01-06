/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassi-f <malikfassifihri@gmail.co>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/07/22 13:49:34 by mfassi-f          #+#    #+#             */
/*   Updated: 2013/07/22 23:07:16 by mfassi-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		i;

	if (nb <= 1)
		return (0);
	i = 3;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i <= 2)
		return (2);
	if (i % 2 == 0)
		i++;
	while (!ft_is_prime(i))
		i += 2;
	return (i);
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(5982));
	printf("%d\n", ft_find_next_prime(2000000000));
	printf("%d\n", ft_find_next_prime(-50));
	return (0);
}
*/