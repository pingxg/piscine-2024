/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:24:28 by pgao              #+#    #+#             */
/*   Updated: 2024/08/12 09:25:41 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");        // Should print "42"
	//ft_putnbr_base(42, "01");                // Should print "101010"
	//ft_putnbr_base(-42, "0123456789ABCDEF"); // Should print "-2A"
	//ft_putnbr_base(0, "poneyvif");
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_recursive(int nbr, char*base, int base_len)
{
	if (nbr >= base_len)
	{
		ft_putnbr_recursive(nbr / base_len, base, base_len);
	}
	ft_putchar(base[nbr % base_len]);
}

int	get_len(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (get_len(base) <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!is_valid_base(base))
		return ;
	base_len = get_len(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			ft_putnbr_recursive(-(nbr / base_len), base, base_len);
			ft_putchar(base[-(nbr % base_len)]);
		}
		else
		{
			ft_putnbr_recursive(-nbr, base, base_len);
		}
	}
	else
	{
		ft_putnbr_recursive(nbr, base, base_len);
	}
}
