/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/07 01:50:35 by ybarbier          #+#    #+#             */
/*   Updated: 2014/08/07 16:41:05 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argv, char **argc)
{
	char	*tmp;
	int		i;

	i = 0;
	while (++i < argv - 1)
	{
		if (ft_strcmp(argc[i], argc[i + 1]) > 0)
		{
			tmp = argc[i];
			argc[i] = argc[i + 1];
			argc[i + 1] = tmp;
			i = 0;
		}
	}
	i = 0;
	while (++i < argv)
	{
		ft_putstr(argc[i]);
		ft_putchar('\n');
	}
	return (0);
}
