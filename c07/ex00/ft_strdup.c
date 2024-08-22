/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:34:24 by pgao              #+#    #+#             */
/*   Updated: 2024/08/14 12:48:41 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
/*
char	*ft_strdup(char *src);

int main(void)
{
    char *src1 = "Hello, World!";
    char *src2 = "This is a test.";
    char *src3 = "";
    char *src4 = "A longer string to test the function.";
    
    // Testing ft_strdup with different strings
    char *dup1 = ft_strdup(src1);
    char *dup2 = ft_strdup(src2);
    char *dup3 = ft_strdup(src3);
    char *dup4 = ft_strdup(src4);
    
    // Print the original and duplicated strings
    printf("Original: %s\nDuplicated: %s\n\n", src1, dup1);
    printf("Original: %s\nDuplicated: %s\n\n", src2, dup2);
    printf("Original: %s\nDuplicated: %s\n\n", src3, dup3);
    printf("Original: %s\nDuplicated: %s\n\n", src4, dup4);
    
    // Free the duplicated strings after use
    free(dup1);
    free(dup2);
    free(dup3);
    free(dup4);
    
    return 0;
}
*/
int	get_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*output;
	int		i;

	i = 0;
	output = (char *)malloc(sizeof(char) * (get_len(src) + 1));
	if (!output)
		return (NULL);
	while (src[i])
	{
		output[i] = src[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
