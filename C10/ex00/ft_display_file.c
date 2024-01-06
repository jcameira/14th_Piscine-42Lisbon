/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 08:06:29 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/19 10:38:16 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_file(char *filename)
{
	int		file;
	char	character;

	file = open(filename, O_RDONLY);
	if (!file)
		write(2, "Cannot read file.\n", 18);
	else
	{
		if (file < 0)
			return ;
		while (read(file, &character, 1))
			ft_putchar(character);
		close (file);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc == 1)
			write(2, "File name missing.\n", 19);
		else if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
