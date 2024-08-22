/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:49:31 by pgao              #+#    #+#             */
/*   Updated: 2024/08/05 14:56:04 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	c[] = "AVasadASDfijd";
	
	ft_strupcase(c);
	printf("%s", c);
}
*/
char	*ft_strupcase(char *str)
{
	char	*output;

	output = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (output);
}
