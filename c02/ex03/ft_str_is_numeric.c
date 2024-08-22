/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:35:27 by pgao              #+#    #+#             */
/*   Updated: 2024/08/05 14:37:35 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	c[] = "12392089382";
	int	o;
	
	o = ft_str_is_numeric(c);
	o = o +'0';
	write(1, &o, 1);
}
*/
int	ft_str_is_numeric(char *str)
{
	int	output;

	output = 1;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			output = 0;
		}
		str++;
	}
	return (output);
}
