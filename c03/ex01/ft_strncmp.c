/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:25:54 by pgao              #+#    #+#             */
/*   Updated: 2024/08/07 11:25:59 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
    char str1[] = "hello";
    char str2[] = "helld";
    char str3[] = "hello";

    printf("Comparing str1 and str2: %d\n", ft_strncmp(str1, str2, 5));
    printf("Comparing str1 and str3: %d\n", ft_strncmp(str1, str3, 5));

    return 0;
}
*/
int	ft_strlen(char *s)
{
	int	n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	return (n);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
