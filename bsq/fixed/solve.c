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

void	ft_solution(t_map *s)
{	
	int	x;
	int	y;

	y = 0;
	s->sx = 0;
	s->sy = 0;
	s->square = 0;
	while (y < s->height)
	{
		x = 0;
		while (x < s->width)
		{
			if (s->ct[(y * s->width) + x] == s->emp)
			{
				ft_chk_upsq(s, x, y);
			}
			x ++;
		}
		y ++;
	}
	ft_change_map(s);
	ft_print_map(s);
}

void	ft_chk_upsq(t_map *s, int x, int y)
{
	int	tsquare;

	tsquare = ft_checksq(s, x, y);
	if (s->square < tsquare)
	{
		s->square = tsquare;
		s->sx = x;
		s->sy = y;
	}
}

int	ft_checksq(t_map *s, int x, int y)
{
	int	i;
	int	tsquare;

	tsquare = 1;
	i = 1;
	while ((x + i) < s->width)
	{
		if (s->ct[(y * s->width) + x + i] == s->emp)
		{
			tsquare = ft_chk_tsq(s, x, y, tsquare);
		}
		else
			return (tsquare);
		i ++;
	}
	return (tsquare);
}

int	ft_chk_tsq(t_map *s, int x, int y, int tsquare)
{
	int	j;
	int	k;

	j = y;
	tsquare ++;
	while (j < y + tsquare)
	{
		// We hit the bottom
		if(j==s->height)
			return (tsquare-1);

		k = x;
		while (k < x + tsquare)
		{
			if (s->ct[(j * s->width) + k] == s->emp)
				k ++;
			else
				return (tsquare - 1);
		}
		j ++;
	}

	return (tsquare);
}
