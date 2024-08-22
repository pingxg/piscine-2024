/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:05:12 by pgao              #+#    #+#             */
/*   Updated: 2024/08/07 15:05:37 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int nb);

int main()
{
	char dest[20] = "abcdefgh";
	char src[] = "012345";
	unsigned int nb;
	unsigned int a;
	nb = 10;
	a = ft_strlcat(dest, src, nb);
	printf("After strcat:\n");
	printf("dest: %s\n", dest);
	printf("%d\n", a);


	return 0;
}
*/
unsigned int	ft_get_len(char *c)
{
	unsigned int	n;

	n = 0;
	while (c[n])
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_get_len(dest);
	src_len = ft_get_len(src);
	i = 0;
	if (size == 0 || dest_len >= size)
	{
		return (size + src_len);
	}
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (dest_len < size)
	{
		return (dest_len + src_len);
	}
	else
	{
		return (size + src_len);
	}
}
