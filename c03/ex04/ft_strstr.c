/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:44:06 by pgao              #+#    #+#             */
/*   Updated: 2024/08/07 14:18:03 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
    printf("%s\n", ft_strstr("hello world", "hello"));
    printf("%s\n", ft_strstr("hello world", "o w"));
    printf("%s\n", ft_strstr("hello world", "lo"));
    printf("%s\n", ft_strstr("hello world", ""));
    printf("%s\n", ft_strstr("hello world", "z"));
    printf("%s\n", ft_strstr("hello world", "world!"));
    printf("%s\n", ft_strstr("aaaaa", "a"));
    return 0;
}
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (!to_find[j])
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
