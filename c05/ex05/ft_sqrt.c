/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:55:05 by pgao              #+#    #+#             */
/*   Updated: 2024/08/13 10:56:19 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("%d", ft_sqrt(4));
	return (0);
}
*/
int	ft_sqrt(int nb)
{
	int	output;

	output = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	while (output < nb)
	{
		if (output * output == nb)
			return (output);
		output++;
	}
	return (0);
}
