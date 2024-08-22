/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:52:48 by pgao              #+#    #+#             */
/*   Updated: 2024/08/13 10:53:05 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d", ft_iterative_power(3, 2));
	return (0);
}
*/
int	ft_iterative_power(int nb, int power)
{
	int	output;

	output = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		output *= nb;
		power--;
	}
	return (output);
}
