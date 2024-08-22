/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:39:53 by pgao              #+#    #+#             */
/*   Updated: 2024/08/05 14:41:46 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	c[] = "Aiaud";
	int	o;
	
	o = ft_str_is_uppercase(c);
	o = o +'0';
	write(1, &o, 1);
}
*/
int	ft_str_is_uppercase(char *str)
{
	int	output;

	output = 1;
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			output = 0;
		}
		str++;
	}
	return (output);
}
