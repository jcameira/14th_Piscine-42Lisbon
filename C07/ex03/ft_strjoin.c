/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:06:19 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/19 06:15:39 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

int	return_lenght(int size, char **strs, int size_sep)
{
	int	i;
	int	len;

	i = -1;
	len = size_sep * -1;
	while (++i < size)
		len += size_sep + ft_strlen(strs[i]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*buffer;
	int		len;

	if (size == 0)
	{
		buffer = (char *) malloc(1);
		return (buffer);
	}
	len = return_lenght(size, strs, ft_strlen(sep));
	i = -1;
	buffer = malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return (0);
	while (++i < size)
	{
		buffer = ft_strcpy(buffer, strs[i]);
		if (i + 1 < size)
			buffer = ft_strcpy(buffer, sep);
	}
	*buffer = '\0';
	return (buffer - len);
}
/*
int	main(int argv, char **argc)
{
	char	*res_str;

	res_str = ft_strjoin(argv, argc, ", ");
	if (res_str == NULL)
		return (1);
	printf("buffer: %s\n", res_str);
	free(res_str);
	return (0);
}
*/