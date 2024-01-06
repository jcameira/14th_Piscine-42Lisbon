/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:41:45 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/15 12:35:44 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*numbers;
	int	j;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	j = max - min;
	numbers = malloc(sizeof (int) * j);
	if (numbers == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = numbers;
	i = 0;
	while (min < max)
	{
		numbers[i] = min;
		min++;
		i++;
	}
	return (j);
}
/*
int	main(void)
{
	int	*buffer;
	int	i;

	printf("%d\n", ft_ultimate_range(&buffer, 2, 8));
	i = 0;
	while (i < ft_ultimate_range(&buffer, 2, 8))
	{
		printf("%d\n", buffer[i]);
		i++;
	}
	free(buffer);
	return (0);
}
*/