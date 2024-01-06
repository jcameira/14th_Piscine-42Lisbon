/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:51:06 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/07 21:26:49 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("qwefwrvqerq"));
	printf("%d\n", ft_str_is_lowercase("qwefwrQWEqerq"));
	printf("%d\n", ft_str_is_lowercase("qwefwr rq"));
	printf("%d\n", ft_str_is_lowercase("qwef?@! qerq"));
	printf("%d\n", ft_str_is_lowercase("qwefw\nerq"));
	return (0);
}
*/
