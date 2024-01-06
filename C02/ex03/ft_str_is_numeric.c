/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:32:39 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/07 21:26:52 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
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
	printf("%d\n", ft_str_is_numeric("1234567"));
	printf("%d\n", ft_str_is_numeric("qwefwr123qerq"));
	printf("%d\n", ft_str_is_numeric("qwefwr rq"));
	printf("%d\n", ft_str_is_numeric("qwef?@! qerq"));
	printf("%d\n", ft_str_is_numeric("qwefw\nerq"));
	return (0);
}
*/
