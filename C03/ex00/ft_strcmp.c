/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:50:12 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/07 11:05:13 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strcmp("Hello", "Hello"));
	printf("%d\n", ft_strcmp("Hello", "hello"));
	printf("%d\n", ft_strcmp("Hello", "Hel"));
	printf("%d\n", ft_strcmp("Hello", "Hello World"));
	printf("%d\n", ft_strcmp("Hello", "1243"));
	return (0);
}
*/
