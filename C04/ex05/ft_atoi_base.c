/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:35:43 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/10 19:01:41 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] < 32 || base[i] > 126 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_to_dec(char str, char *base)
{
	int	retour;
	int	i;

	retour = 0;
	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	signal_search(char *str, int *i)
{
	int	signal;

	signal = 1;
	while (str[*i] == ' ' || str[*i] == '\f' || str[*i] == '\n'
		|| str[*i] == '\r' || str[*i] == '\t' || str[*i] == '\v')
		*i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			signal *= -1;
		*i += 1;
	}
	return (signal);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		signal;
	int		num;
	int		tmp_num;

	num = 0;
	i = 0;
	if (check_error(base))
	{
		if (ft_strlen(base) >= 2)
		{
			signal = signal_search(str, &i);
			tmp_num = base_to_dec(str[i], base);
			while (tmp_num != -1)
			{
				num = (num * ft_strlen(base)) + tmp_num;
				i++;
				tmp_num = base_to_dec(str[i], base);
			}
			return (num *= signal);
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi_base("\n \t\r \v \f++-+-+--30,.fs", "0123456789ABCDEF"));
	return (0);
}
*/