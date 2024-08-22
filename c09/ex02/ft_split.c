/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:32:07 by pgao              #+#    #+#             */
/*   Updated: 2024/08/21 12:32:09 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_in_charset(*str, charset))
			str++;
		if (*str && !is_in_charset(*str, charset))
		{
			count++;
			while (*str && !is_in_charset(*str, charset))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && !is_in_charset(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words_count;
	int		i;

	words_count = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && is_in_charset(*str, charset))
			str++;
		if (*str && !is_in_charset(*str, charset))
		{
			result[i] = malloc_word(str, charset);
			i++;
			while (*str && !is_in_charset(*str, charset))
				str++;
		}
	}
	result[i] = 0;
	return (result);
}
