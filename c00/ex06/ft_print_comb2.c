/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <pgao@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:09:03 by pgao              #+#    #+#             */
/*   Updated: 2024/08/01 16:14:11 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_format_nb(int i)
{
	char	buffer[2];

	if (i < 10)
	{
		buffer[0] = '0';
		buffer[1] = '0' + i;
	}
	if (i >= 10)
	{
		buffer[0] = (i / 10) + '0';
		buffer[1] = (i % 10) + '0';
	}
	write(1, buffer, 2);
}

void	ft_print(int a, int b)
{
	ft_format_nb(a);
	ft_putchar(' ');
	ft_format_nb(b);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print(i, j);
			if (!(i == 98 && j == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
