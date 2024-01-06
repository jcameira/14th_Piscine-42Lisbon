/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:51:06 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/07 21:23:32 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			if (!(str[i] >= 97 && str[i] <= 122))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_alpha("qwefwrvqerq"));
	printf("%d\n", ft_str_is_alpha("qweWERqerq"));
	printf("%d\n", ft_str_is_alpha("qwefwr123qerq"));
	printf("%d\n", ft_str_is_alpha("qwefwr rq"));
	printf("%d\n", ft_str_is_alpha("qwef?@! qerq"));
	printf("%d\n", ft_str_is_alpha("qwefw\nerq"));
	return (0);
}
*/