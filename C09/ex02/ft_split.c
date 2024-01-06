/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:02:12 by jcameira          #+#    #+#             */
/*   Updated: 2023/09/19 02:03:06 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_delimiter(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (str == charset[i])
		{
			return (1);
		}
		i++;
	}
	if (str == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (is_delimiter(str[i], charset) && str[i] != '\0')
			i++;
		if (!is_delimiter(str[i], charset) && str[i] != '\0')
			words++;
		while (!is_delimiter(str[i], charset) && str[i] != '\0')
			i++;
	}
	return (words);
}

char	*word_dup(char *str, int size)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((size + 1) * sizeof(char));
	while (i < size)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;
	int		word;

	words = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!words)
		return (NULL);
	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_delimiter(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (!is_delimiter(str[i + j], charset))
				j++;
			words[word++] = word_dup(&str[i], j);
			i += j;
		}
	}
	words[word] = 0;
	return (words);
}
