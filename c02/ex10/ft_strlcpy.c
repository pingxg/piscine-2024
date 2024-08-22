/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:03:32 by pgao              #+#    #+#             */
/*   Updated: 2024/08/06 14:59:45 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>

// Declare the function prototype for ft_strlcpy
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main() {
    char dest[50];
    char src[] = "Hello, World!";
    unsigned int size;
    unsigned int len;

    // Test case 1: Normal case
    size = 10;
    len = ft_strlcpy(dest, src, size);
    printf("%s %s %u\n", src, dest, len);

    // Test case 2: Destination size is zero
    size = 0;
    len = ft_strlcpy(dest, src, size);
    rintf("%s %s %u\n", src, dest, len);

    // Test case 3: Destination size is less than the source length
    size = 5;
    len = ft_strlcpy(dest, src, size);
    rintf("%s %s %u\n", src, dest, len);

    // Test case 4: Destination size is greater than the source length
    size = 20;
    len = ft_strlcpy(dest, src, size);
    rintf("%s %s %u\n", src, dest, len);

    return 0;
}
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	while (i < (size - 1) && src[i] && size > 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
