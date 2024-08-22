/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:14:03 by pgao              #+#    #+#             */
/*   Updated: 2024/08/14 13:20:11 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
/*
int     *ft_range(int min, int max);

void    print_array(int *array, int size)
{
    if (!array)
    {
        printf("Array is NULL\n");
        return ;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int     main(void)
{
    int min, max;
    int *range;
    int size;

    // Test case 1: min < max
    min = 3;
    max = 8;
    size = max - min;
    range = ft_range(min, max);
    printf("ft_range(%d, %d): ", min, max);
    print_array(range, size);
    free(range);

    // Test case 2: min >= max (expecting NULL)
    min = 5;
    max = 5;
    range = ft_range(min, max);
    printf("ft_range(%d, %d): ", min, max);
    print_array(range, 0);
    free(range);

    // Test case 3: min >= max (expecting NULL)
    min = 10;
    max = 5;
    range = ft_range(min, max);
    printf("ft_range(%d, %d): ", min, max);
    print_array(range, 0);
    free(range);

    return (0);
}
*/
int	*ft_range(int min, int max)
{
	int	*output;
	int	i;

	i = 0;
	output = (int *)malloc(sizeof(int) * (max - min));
	if (!output)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min + i < max)
	{
		output[i] = min + i;
		i++;
	}
	return (output);
}
