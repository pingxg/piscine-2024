/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:51:14 by pgao              #+#    #+#             */
/*   Updated: 2024/08/13 10:51:34 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}
*/
int	ft_iterative_factorial(int nb)
{
	int	output;

	if (nb < 0)
	{
		return (0);
	}
	output = 1;
	while (nb > 0)
	{
		output *= nb;
		nb--;
	}
	return (output);
}
