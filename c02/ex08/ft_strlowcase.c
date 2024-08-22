/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:05:22 by pgao              #+#    #+#             */
/*   Updated: 2024/08/05 15:05:27 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	c[] = "AVasadASDfijd";
	
	ft_strlowcase(c);
	printf("%s", c);
}
*/
char	*ft_strlowcase(char *str)
{
	char	*output;

	output = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + ('a' - 'A');
		}
		str++;
	}
	return (output);
}
