/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:51:06 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/08 13:24:33 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        printf("%d\n", ft_str_is_uppercase("QWERQWERQWER"));
        printf("%d\n", ft_str_is_uppercase("qweQWERr123qerq"));
        printf("%d\n", ft_str_is_uppercase("qwefwr rq"));
        printf("%d\n", ft_str_is_uppercase("qwef?@! qerq"));
        printf("%d\n", ft_str_is_uppercase("qwefw\nerq"));
        return (0);
}
*/
