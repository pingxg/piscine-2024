/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:38:04 by pgao              #+#    #+#             */
/*   Updated: 2024/08/05 14:38:46 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	c[] = "Aiaud";
	int	o;
	
	o = ft_str_is_lowercase(c);
	o = o +'0';
	write(1, &o, 1);
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	output;

	output = 1;
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			output = 0;
		}
		str++;
	}
	return (output);
}
