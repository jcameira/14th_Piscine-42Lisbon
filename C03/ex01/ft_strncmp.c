/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:05:45 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/09 21:20:03 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main(void)
{
	unsigned int	n;

	n = 16;
	printf("%d\n", ft_strncmp("Hello", "Hello", n));
	printf("%d\n", ft_strncmp("Hello", "hello", n));
	printf("%d\n", ft_strncmp("Hello", "Hell", n));
	printf("%d\n", ft_strncmp("Hello", "Hello World", n));
	printf("%d\n", ft_strncmp("Hello", "1243", n));
	return (0);
}
*/