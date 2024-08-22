/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:44:52 by pgao              #+#    #+#             */
/*   Updated: 2024/08/05 14:46:34 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	c[] = "Aia€ud‰ZX";
	int	o;
	
	o = ft_str_is_printable(c);
	o = o +'0';
	write(1, &o, 1);
}
*/
int	ft_str_is_printable(char *str)
{
	int	output;

	output = 1;
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			output = 0;
		}
		str++;
	}
	return (output);
}
