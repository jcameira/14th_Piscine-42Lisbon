/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:13:40 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/20 17:49:50 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
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
*/
int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < length)
	{
		if (f(tab[i++]))
			j++;
	}
	return (j);
}
/*
int	main(void)
{
	char	*strs[5];

	strs[0] = "qefqwefqwef";
	strs[1] = "qwefqwefqewf";
	strs[2] = "qewr3254qwerqwer";
	strs[3] = "qwerqwerqwer";
	printf("%d\n", ft_count_if(strs, 4, ft_str_is_alpha));
	return (0);
}
*/