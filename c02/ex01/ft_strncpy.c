/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:19:55 by pgao              #+#    #+#             */
/*   Updated: 2024/08/05 13:26:54 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>

// Function prototype
char *ft_strncpy(char *dest, char *src, unsigned int n);

// Helper function to print the result
void print_result(char *desc, char *result, int n) {
    printf("%s\nResult: '%s'\nExpec: '%.*s'\n\n", desc, result, n, result);
}

int main() {
    char dest[100];

    // Test 1: Basic Copy
    memset(dest, 0, sizeof(dest));
    ft_strncpy(dest, "Hello, World!", 20);
    print_result("Test 1: Basic Copy", dest, 20);

    // Test 2: Exact Copy
    memset(dest, 0, sizeof(dest));
    ft_strncpy(dest, "Hello", 5);
    print_result("Test 2: Exact Copy", dest, 5);

    // Test 3: Partial Copy
    memset(dest, 0, sizeof(dest));
    ft_strncpy(dest, "Hello, World!", 5);
    print_result("Test 3: Partial Copy", dest, 5);

    // Test 4: Empty Source
    memset(dest, 0, sizeof(dest));
    ft_strncpy(dest, "", 5);
    print_result("Test 4: Empty Source", dest, 5);

    // Test 5: Empty Destination with non-empty source
    memset(dest, 0, sizeof(dest));
    ft_strncpy(dest, "Hello", 10);
    print_result("Test 5: Empty Destination", dest, 10);

    // Test 6: Long n
    memset(dest, 0, sizeof(dest));
    ft_strncpy(dest, "Hello", 100);
    print_result("Test 6: Long n", dest, 100);

    // Test 7: Source is Longer Than n
    memset(dest, 0, sizeof(dest));
    ft_strncpy(dest, "Hello, World!", 7);
    print_result("Test 7: Source is Longer Than n", dest, 7);

    return 0;
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
