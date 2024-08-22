/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:15:10 by pgao              #+#    #+#             */
/*   Updated: 2024/08/05 13:19:31 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

// Declaration of the ft_strcpy function
char *ft_strcpy(char *dest, char *src);

int main() {
    char dest[50];
    char *src;
    char *result;

    // Test case 1: Normal case
    src = "Hello, world!";
    result = ft_strcpy(dest, src);
    printf("Test 1:\nDest: \"%s\"\n", dest);

    // Test case 2: Empty source string
    src = "";
    result = ft_strcpy(dest, src);
    printf("Test 2:\nDest: \"%s\"\n", dest);

    // Test case 3: Long source string (shortened for print)
    src = "Long string test.";
    result = ft_strcpy(dest, src);
    printf("Test 3:\nDest: \"%s\"\n", dest);

    return 0;
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
