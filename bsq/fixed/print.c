/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_ji.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ji-hong <ji-hong@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:14:30 by ji-hong           #+#    #+#             */
/*   Updated: 2024/08/21 15:45:44 by ji-hong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_change_map(t_map *s)
{
	int	x;
	int	y;

	if (s->square > 0)
	{
		y = s->sy;
		while (y < (s->sy + s->square) && y < s->height)
		{
			x = s->sx;
			while (x < (s->sx + s->square) && x < s->width)
			{
				s->ct[(y * s->width) + x] = s->full;
				x ++;
			}
			y ++;
		}
	}
}

void	ft_print_map(t_map *s)
{
	int	y;

	y = 0;
	while (y < s->height)
	{
		write(1, &(s->ct [y * s->width]), s->width);
		write(1, "\n", 1);
		y ++;
	}
}
