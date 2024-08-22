/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*       mlitvino, atran                          +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:50:10 by pgao              #+#    #+#             */
/*   Updated: 2024/08/03 16:03:51 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_t(int col, int x)
{
	while (col < x)
	{
		if (col == 0)
		{
			ft_putchar('A');
		}
		if (col != 0 && col != x - 1)
		{
			ft_putchar('B');
		}
		if (col == x - 1 && col != 0)
		{
			ft_putchar('C');
		}
		col ++;
	}
	ft_putchar('\n');
	col = 0;
}

void	print_m(int col, int x)
{
	while (col < x)
	{
		if (col == 0 || col == x - 1)
		{
			ft_putchar('B');
		}
		if (col != 0 && col != x - 1)
		{
			ft_putchar(' ');
		}
		col ++;
	}
	ft_putchar('\n');
	col = 0;
}

void	print_b(int col, int x)
{
	while (col < x)
	{
		if (col == x - 1 && col != 0)
		{
			ft_putchar('A');
		}
		if (col != 0 && col != x - 1)
		{
			ft_putchar('B');
		}
		if (col == 0)
		{
			ft_putchar('C');
		}
		col ++;
	}
	ft_putchar('\n');
	col = 0;
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (x > 0 && y > 0)
	{
		col = 0;
		row = 0;
		while (row < y)
		{
			if (row == 0)
			{
				print_t(col, x);
			}
			if (row > 0 && row < y - 1)
			{
				print_m(col, x);
			}
			if (row == y - 1 && row != 0)
			{
				print_b(col, x);
			}
			row ++;
		}
	}
}
