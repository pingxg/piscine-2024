/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:08:23 by pgao              #+#    #+#             */
/*   Updated: 2024/08/07 12:24:10 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
    char dest[15] = "Hello, "; // Ensure dest has enough space to hold the result
    char src[] = "world!";

    // Print the original strings
    printf("Before strcat:\n");
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);

    // Call ft_strcat and print the result
    ft_strcat(dest, src);

    printf("After strcat:\n");
    printf("dest: %s\n", dest);

    return 0;
}
*/
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
