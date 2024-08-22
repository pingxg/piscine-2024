/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:33:41 by pgao              #+#    #+#             */
/*   Updated: 2024/08/07 12:33:43 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char dest[15] = "Hello, ";
	char src[] = "world!";
	unsigned int nb;
	
	nb = 4;

	// Print the original strings
	printf("Before strcat:\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);

	// Call ft_strcat and print the result
	ft_strncat(dest, src, nb);

	printf("After strcat:\n");
	printf("dest: %s\n", dest);

	// Compare with the standard strcat function
	char std_dest[15] = "Hello, ";
	strncat(std_dest, src, nb);
	printf("Expected: %s\n", std_dest);

	return 0;
}
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}
