/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:21:59 by pgao              #+#    #+#             */
/*   Updated: 2024/08/20 09:22:00 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_atoi(char *nbr)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (*nbr && (*nbr >= '0' && *nbr <= '9'))
	{
		value = (value * 10) + (*nbr - '0');
		nbr++;
	}
	return (value * sign);
}

void	remove_newlines(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map->ct[i])
	{
		if (map->ct[i] != '\n')
		{
			map->ct[j] = map->ct[i];
			j++;
		}
		i++;
	}
	map->ct[j] = '\0';
}
