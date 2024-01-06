/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:40:22 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/19 06:23:35 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_atoi_base(char *str, char *base);
int	is_valid_base(char *base);
int	digits(char digit_char, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_rev_tab(char *tab)
{
	int		i;
	int		j;
	int		size;
	char	temp;

	size = ft_strlen(tab);
	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

char	*ft_putnbr_base(int nbr, char *base)
{
	unsigned int	value;
	unsigned int	base_count;
	char			*converted_num;
	int				i;

	i = 0;
	base_count = ft_strlen(base);
	value = nbr;
	if (nbr < 0)
		value = -nbr;
	converted_num = (char *)malloc(sizeof(char) * 34);
	if (!converted_num)
		return (NULL);
	if (value == 0)
		converted_num[i++] = base[0];
	while (value)
	{
		converted_num[i++] = base[value % base_count];
		value /= base_count;
	}
	if (nbr < 0)
		converted_num[i++] = '-';
	converted_num[i] = 0;
	ft_rev_tab(converted_num);
	return (converted_num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*converted_number;

	if (is_valid_base(base_from) <= 1 || is_valid_base(base_to) <= 1)
		return (NULL);
	converted_number = ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to);
	return (converted_number);
}
/*
int	main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
*/