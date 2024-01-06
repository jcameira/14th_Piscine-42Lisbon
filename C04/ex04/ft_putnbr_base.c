/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:09:29 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/20 22:56:14 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	check_errors(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[i] == '+' || s[i] == '-' || s[i] < ' ')
		return (1);
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if (s[i] == s[j] || s[j] == '+' || s[j] == '-' || s[i] < ' ')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	num;
	char		c;

	num = nbr;
	base_len = ft_strlen(base);
	if (base_len < 2 || check_errors(base))
		return ;
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	if ((num / base_len) > 0)
	{
		ft_putnbr_base(num / base_len, base);
		ft_putnbr_base(num % base_len, base);
	}
	else 
	{
		c = base[num];
		write(1, &c, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(48, "0123456789abcdef");
	return (0);
}
*/