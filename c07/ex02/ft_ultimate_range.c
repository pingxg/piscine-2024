/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:20:59 by pgao              #+#    #+#             */
/*   Updated: 2024/08/14 13:23:42 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*output_arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	output_arr = (int *)malloc(sizeof(int) * (max - min));
	if (!output_arr)
	{
		*range = NULL;
		return (-1);
	}
	while (min + i < max)
	{
		output_arr[i] = min + i;
		i++;
	}
	*range = output_arr;
	return (i);
}
