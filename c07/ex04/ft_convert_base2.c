/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:37:47 by pgao              #+#    #+#             */
/*   Updated: 2024/08/16 08:20:24 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_base_length(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	if (i >= 2)
		return (i);
	return (0);
}

int	ft_c2v(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	if (base[i] == c)
		return (i);
	return (-1);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	if (ft_base_length(base_from) == 0)
		return (0);
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (*nbr && ft_c2v(*nbr, base_from) >= 0)
	{
		value = (value * ft_base_length(base_from)) + ft_c2v(*nbr, base_from);
		nbr++;
	}
	return (value * sign);
}

char	*ft_get_result(int nbr, char *base_to, int len, char *result)
{
	int	temp;

	temp = nbr;
	result[len] = '\0';
	if (nbr == 0)
		result[0] = base_to[0];
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			result[--len] = base_to[-(nbr % ft_base_length(base_to))];
			nbr /= ft_base_length(base_to);
		}
		temp = -nbr;
	}
	while (temp)
	{
		result[--len] = base_to[temp % ft_base_length(base_to)];
		temp /= ft_base_length(base_to);
	}
	if (nbr < 0)
		result[0] = '-';
	return (result);
}

char	*ft_itoa_base(int nbr, char *base_to)
{
	char	*result;
	int		len;
	int		temp;

	temp = nbr;
	if (nbr <= 0)
		len = 1;
	else
		len = 0;
	while (temp && ++len)
		temp /= ft_base_length(base_to);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	return (ft_get_result(nbr, base_to, len, result));
}
