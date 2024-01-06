/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:23:57 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/07 21:48:04 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_lowercase(char *c)
{
	return (*c >= 97 && *c <= 122);
}

int	is_uppercase(char *c)
{
	return (*c >= 65 && *c <= 90);
}

int	is_numeric(char *c)
{
	return (*c >= 48 && *c <= 57);
}

int	is_other(char *c)
{
	return (!(is_lowercase(c) || is_uppercase(c) || is_numeric(c)));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (is_lowercase(&str[0]))
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (is_uppercase(&str[i]))
		{
			str[i] += 32;
		}
		if (is_other(&str[i - 1]) && is_lowercase(&str[i]))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/