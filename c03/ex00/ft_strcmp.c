/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:20:55 by pgao              #+#    #+#             */
/*   Updated: 2024/08/07 10:14:47 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_strlen(char *s);
int ft_cmplen(char *s1, char *s2);
int ft_strcmp(char *s1, char *s2);

int main()
{
    char str1[] = "bellod";
    char str2[] = "bellod";
    char str3[] = "b";

    printf("Comparing str1 and str2: %d\n", ft_strcmp(str1, str2));
    printf("Comparing str1 and str3: %d\n", ft_strcmp(str1, str3));

    return 0;
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
