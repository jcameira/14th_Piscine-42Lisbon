/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:49:20 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/21 21:00:13 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

void	ft_display(int file)
{
	char	buffer;

	buffer = 0;
	while (read(file, &buffer, 1) > 0)
		write(1, &buffer, 1);
	if (read(file, &buffer, 1) < 0)
		write(2, "Error while reading file.\n", 26);
}

void	ft_cat(int argc, char **argv)
{
	int	i;
	int	file;

	i = 0;
	if (argc < 2)
		ft_display(0);
	while (++i < argc)
	{
		file = open(argv[i], O_RDONLY);
		if (file < 0)
		{
			write(2, "ft_cat: ", 8);
			while (*(argv[i]))
				write(2, (argv[i])++, 1);
			write(2, ": No such file or directory\n", 28);
		}
		else
			ft_display(file);
		close(file);
	}
}

int	main(int argc, char **argv)
{
	ft_cat(argc, argv);
	return (0);
}