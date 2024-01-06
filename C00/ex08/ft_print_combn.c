/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 22:24:35 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/07 10:42:59 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_buffer(int n, int buffer[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(buffer[i] + '0');
		i++;
	}
	if (buffer[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_next_set_of_numbers(int n, int buffer[])
{
	int	i;
	int	j;

	i = n - 1;
	j = 9;
	ft_write_buffer(n, buffer);
	while (buffer[i] != j)
	{
		buffer[i]++;
		ft_write_buffer(n, buffer);
	}
	if (n == 1)
		return ;
	while (buffer[i] == j)
	{
		i--;
		j--;
	}
	buffer[i]++;
	while (i < n)
	{
		buffer[i + 1] = buffer[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	buffer[10];
	int	i;

	i = 0;
	if (n >= 10 || n <= 0)
	{
		return ;
	}
	while (i < n)
	{
		buffer[i] = i;
		i++;
	}
	while (buffer[0] != 10 - n)
	{
		ft_print_next_set_of_numbers(n, buffer);
	}
	if (n == 1)
	{
		ft_putchar('\n');
		return ;
	}
	ft_print_next_set_of_numbers(n, buffer);
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_combn(1);
	ft_print_combn(2);
	ft_print_combn(3);
	ft_print_combn(4);
	return (0);
}
