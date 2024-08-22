/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:53:14 by pgao              #+#    #+#             */
/*   Updated: 2024/08/13 10:53:29 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d", ft_recursive_power(3, 2));
	return (0);
}
*/
int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	return (ft_recursive_power(nb, power - 1) * nb);
}
