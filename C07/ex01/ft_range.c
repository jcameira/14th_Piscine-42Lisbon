/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:32:14 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/15 12:34:29 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	range;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	numbers = malloc(sizeof (int) * range);
	if (numbers == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		numbers[i] = min;
		min++;
		i++;
	}
	return (numbers);
}
/*
int	main(void)
{
	int	i;
	int	*numbers;

	i = 0;
	numbers = ft_range(2, 8);
	while (i < 6)
	{
		printf("%d\n", numbers[i]);
		i++;
	}
	free(numbers);
	return (0);
}
*/