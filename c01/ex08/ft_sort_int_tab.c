/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <pgao@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:48:19 by pgao              #+#    #+#             */
/*   Updated: 2024/08/04 13:29:51 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

void	print_array(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

int	main(void)
{
	int	array1[] = {5, 4, 3, 2, 1};
	int	size1 = sizeof(array1) / sizeof(array1[0]);
	int	array2[] = {2, 1};
	int	size2 = sizeof(array2) / sizeof(array2[0]);
	int	array3[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
	int	size3 = sizeof(array3) / sizeof(array3[0]);
	int	array4[] = {2};
	int	size4 = sizeof(array4) / sizeof(array4[0]);
	int	array5[] = {};
	int	size5 = sizeof(array5) / sizeof(array5[0]);
	printf("Original array1: ");
	print_array(array1, size1);
	ft_sort_int_tab(array1, size1);
	printf("Reversed array1: ");
	print_array(array1, size1);
	printf("Original array2: ");
	print_array(array2, size2);
	ft_sort_int_tab(array2, size2);
	printf("Reversed array2: ");
	print_array(array2, size2);
	printf("Original array3: ");
	print_array(array3, size3);
	ft_sort_int_tab(array3, size3);
	printf("Reversed array3: ");
	print_array(array3, size3);
	printf("Original array4: ");
	print_array(array4, size4);
	ft_sort_int_tab(array4, size4);
	printf("Reversed array4: ");
	print_array(array4, size4);
	printf("Original array5: ");
	print_array(array5, size5);
	ft_sort_int_tab(array5, size5);
	printf("Reversed array5: ");
	print_array(array5, size5);
    return (0);
}
*/
