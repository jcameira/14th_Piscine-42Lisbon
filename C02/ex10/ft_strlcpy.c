/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 06:54:52 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/07 21:48:43 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_original_size;

	src_original_size = 0;
	while (src[src_original_size] != '\0')
	{
		src_original_size++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size - 1)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (src_original_size);
}
/*
int	main(void)
{
	char	src[] = "Hello World";
	char	dest[100];
	unsigned int		i;

	i = 20;
	printf("%d\n", ft_strlcpy(dest, src, i));
	printf("%s\n", dest);
}
*/
