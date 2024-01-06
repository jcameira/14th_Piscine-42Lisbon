/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouffet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 11:48:36 by vtouffet          #+#    #+#             */
/*   Updated: 2017/07/10 22:24:03 by vtouffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argv, char **argc)
{
	int	i;

	i = 0;
	while (argc[0][i] != '\0' && argv)
	{
		ft_putchar(argc[0][i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}
