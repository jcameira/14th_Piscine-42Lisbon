/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 07:21:58 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/07 22:56:00 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	first;
	int	second;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] == 127)
		{
			write(1, "\\", 1);
			first = "0123456789abcdef"[str[i] / 16];
			write(1, &first, 1);
			second = "0123456789abcdef"[str[i] % 16];
			write(1, &second, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Hell\vo W\norl\fd";
	ft_putstr_non_printable(str);
	return (0);
}
*/