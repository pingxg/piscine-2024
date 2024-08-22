/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <pgao@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:23:25 by pgao              #+#    #+#             */
/*   Updated: 2024/08/04 10:59:51 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	counter;

	counter = 0;
	while (counter < (size / 2))
	{
		temp = tab[counter];
		tab[counter] = tab[size - counter - 1];
		tab[size - counter - 1] = temp;
		counter++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	int i;

	ft_rev_int_tab(tab, size);
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	return 0;
}
*/
