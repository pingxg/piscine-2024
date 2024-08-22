/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:21:17 by pgao              #+#    #+#             */
/*   Updated: 2024/08/20 09:21:19 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		if (!read_and_solve_from_stdin())
			write(2, "map error\n", 10);
		read_and_solve_from_stdin();
		write(1, "\n", 1);
	}
	else
	{
		while (i < argc)
		{	
			if (!read_and_solve_map(argv[i]))
				write(2, "map error\n", 10);
			if (i < argc - 1)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
