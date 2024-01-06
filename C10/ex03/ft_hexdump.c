/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:25:25 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/21 20:57:18 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_print_offset(int n, int i);
void	ft_print_hex(char c, int i, int size);
void	ft_print_ascii(char c);

int	ft_file_size(char *file_name)
{
	char	buffer;
	int		size;
	int		file_desc;

	buffer = 0;
	size = 0;
	file_desc = open(file_name, O_RDONLY);
	if (file_desc < 0)
	{
		write(2, "ft_hexdump: ", 12);
		while (*file_name)
			write(2, file_name++, 1);
		write(2, ": No such file or directory\n", 28);
	}
	else
		while (read(file_desc, &buffer, 1) > 0)
			++size;
	close(file_desc);
	return (size);
}

char	*ft_copy_input(char *file_name, int size)
{
	char	buffer;
	int		i;
	char	*str;
	int		file_desc;

	buffer = 0;
	i = 0;
	str = malloc(size + 1);
	file_desc = open(file_name, O_RDONLY);
	i = 0;
	while (read(file_desc, &buffer, 1) > 0)
		str[i++] = buffer;
	str[i] = '\0';
	close(file_desc);
	return (str);
}

void	ft_hexdump(char *str, int size)
{
	int		i;
	int		j;

	j = 0;
	while (str[j])
	{
		ft_print_offset(j, 1);
		write(1, "  ", 2);
		i = j - 1;
		while (++i < 16 + j)
			ft_print_hex(*(str + i), i, size);
		i = j - 1;
		write(1, "|", 1);
		while (++i < 16 + j && str[i])
			ft_print_ascii(*(str + i));
		write(1, "|\n", 2);
		j += 16;
	}
	ft_print_offset(j, 1);
	write(1, "\n", 1);
	free(str);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		size;

	i = 0;
	while (++i < argc)
	{
		if (!(*argv[i] == '-' && *(argv[i] + 1) == 'C'))
		{
			size = ft_file_size(argv[i]);
			str = ft_copy_input(argv[i], size);
			ft_hexdump(str, size);
		}
	}
	return (0);
}