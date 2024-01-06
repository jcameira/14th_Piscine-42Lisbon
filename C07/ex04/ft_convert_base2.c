/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:48:27 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/19 07:46:54 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str);

int	digits(char digit_char, char *base)
{
	int	n;

	n = 0;
	while (base[n] != 0 && base[n] != digit_char)
		n++;
	return (n);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		if (base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (j < i)
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_count;
	int	nb;
	int	isnegative;

	nb = 0;
	isnegative = 1;
	base_count = ft_strlen(base);
	while (*str != 0 && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	while (*str != 0 && (*str == '-' || *str == '+'))
	{
		if (*str++ == '-')
			isnegative *= -1;
	}
	while (*str != 0 && (digits(*str, base) < base_count))
	{
		nb = (base_count * nb) + (digits(*str, base));
		str++;
	}
	return (nb * isnegative);
}
