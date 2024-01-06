/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:02:12 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/20 22:49:31 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < 1)
		return (src_len + size);
	while (src[i] && (i + dest_len) < size -1)
	{
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[i + dest_len] = '\0';
	if (size < dest_len)
		return (src_len + size);
	else
		return (dest_len + src_len);
}
/*
int	main(void)
{
	char				dest[100];
	char				src[100];
	unsigned int		size;

	size = 18;
	strcpy(dest, "Hello");
	strcpy(src, " World");
	printf("%zu\n", strlcat(dest, src, size));
	printf("%s\n", dest);
	strcpy(dest, "Hello");
	strcpy(src, " World");
	printf("%u\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
	return (0);
}
*/