/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 08:59:21 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/08 13:24:49 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_print_hex(unsigned char byte)
{
	char	character;

	if ((byte / 16) < 10)
	{
		character = (48 + (byte / 16));
		write(1, &character, 1);
	}
	else
	{
		character = (87 + (byte / 16));
		write(1, &character, 1);
	}
	if ((byte % 16) < 10)
	{
		character = (48 + (byte % 16));
		write(1, &character, 1);
	}
	else
	{
		character = (87 + (byte % 16));
		write(1, &character, 1);
	}
}

void	ft_print_addr(void *addr)
{
	unsigned char	*ptrbyte;
	int				i;

	ptrbyte = (unsigned char *)&addr;
	i = 7;
	while (i >= 0)
	{
		ft_print_hex(*(ptrbyte + i));
		i--;
	}
	write(1, ":", 1);
}

void	ft_print_hex_string(void *str, unsigned int size)
{
	int	i;
	int	max;

	i = -1;
	max = 16;
	while (i++ < max)
	{
		if (!(i % 2))
		{
			write(1, " ", 1);
		}
		if (i < size)
		{
			ft_print_hex(*((unsigned char *)str));
		}
		else if (i != 16)
		{
			write(1, " ", 1);
			write(1, " ", 1);
		}
		str++;
	}
}

void	ft_print_data(void *str, unsigned int size)
{
	int	max;

	max = 16;
	while (--size && max--)
	{
		if (*(char *)str <= 31 || *(char *)str == 127)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	int	newsize;

	if (size == 1)
	{
		return (addr);
	}
	i = 0;
	while (i * 16 < size)
	{
		if (i < size / 16)
		{
			newsize = 16;
		}
		else
		{
			newsize = size % 16;
		}
		ft_print_addr(addr + (i * 16));
		ft_print_hex_string(addr + (i * 16), newsize);
		ft_print_data(addr + (i * 16), newsize);
		i++;
	}
	return (addr);
}
/*
int	main(void)
{
	char		addr[] = "Bonjour les aminches\t\n\tc\a est fou\ttout\tc
	e qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";
	unsigned int	size = 92;

	printf("%p\n", addr);
	ft_print_memory((void *)addr, 92);
	return (0);
}
*/