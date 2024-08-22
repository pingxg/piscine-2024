/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <pgao@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:31:32 by pgao              #+#    #+#             */
/*   Updated: 2024/08/02 11:55:55 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	int	is_min;

	is_min = 0;
	if (nb == -2147483648)
	{
		is_min = 1;
		nb += 1;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{	
		ft_putnbr(nb / 10);
	}
	if (is_min == 0)
	{
		ft_putchar((nb % 10) + '0');
	}
	else
	{
		ft_putchar(((nb % 10) + 1) + '0');
	}
}

/*
int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar(',');
	ft_putnbr(-5234);
	ft_putchar(',');
	ft_putnbr(-12);
	ft_putchar(',');
	ft_putnbr(0);
	ft_putchar(',');
	ft_putnbr(-0);
	ft_putchar(',');
	ft_putnbr(+0);
	ft_putchar(',');
	ft_putnbr(3);
	ft_putchar(',');
	ft_putnbr(10);
	ft_putchar(',');
	ft_putnbr(12354);
	ft_putchar(',');
	ft_putnbr(2147483647);
	return (0);
}
*/
