/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:37:23 by pgao              #+#    #+#             */
/*   Updated: 2024/08/16 08:19:38 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*result;

	result = ft_convert_base("42", "0123456789", "01");
	printf("42 in decimal to binary: %s\n", result);
	free(result);
	result = ft_convert_base("  ---42", "0123456789", "01");
	printf("  ---42 in decimal to binary: %s\n", result);
	free(result);
	result = ft_convert_base("-FF", "0123456789ABCDEF", "0123456789");
	printf("-FF in hexadecimal to decimal: %s\n", result);
	free(result);
	result = ft_convert_base("0", "0123456789", "01");
	printf("0 in decimal to binary: %s\n", result);
	free(result);
	result = ft_convert_base("-2147483648", "0123456789", "0123456789ABCDEF");
	printf("-2147483648 in decimal to hexadecimal: %s\n", result);
	result = ft_convert_base("1234567", "01234567", "0123456789");
	printf("1234567 in base 8 to decimal: %s\n", result);
	free(result);
	result = ft_convert_base("42", "0123455", "01");
	if (result == 0)
		printf("Invalid base_from detected\n");
	result = ft_convert_base("42", "0123456789", "011");
	if (result == 0)
		printf("Invalid base_to detected\n");
	return (0);
}
*/
extern char	*ft_itoa_base(int nbr, char *base_to);
extern int	ft_atoi_base(char *nbr, char *base_from);
extern int	ft_base_length(char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*output;
	int		value;

	if (!ft_base_length(base_from) || !ft_base_length(base_to))
		return (0);
	value = ft_atoi_base(nbr, base_from);
	output = ft_itoa_base(value, base_to);
	return (output);
}
