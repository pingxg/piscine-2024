/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 13:30:04 by pgao              #+#    #+#             */
/*   Updated: 2024/08/05 13:58:51 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	c[] = "iaud";
	int	o;
	
	o = ft_str_is_alpha(c);
	o = o +'0';
	write(1, &o, 1);
}
*/
int	ft_str_is_alpha(char *str)
{
	int	output;

	output = 1;
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			output = 0;
		}
		str++;
	}
	return (output);
}
