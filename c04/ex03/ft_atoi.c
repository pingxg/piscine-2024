/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 09:32:33 by pgao              #+#    #+#             */
/*   Updated: 2024/08/08 09:45:05 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
 
int	get_sign(char *str);
char    *get_num_str(char *str);
int	ft_atoi(char *str);
 
int main()
{
    char    *test[] =
    {
        " dasd  a +--43a3tt-+-21234 a-das+1234ab567",
        "-12d3",
        "  --123",
        "+123",
        "  +-1--23",
        "	-+123",
        "++123",
        " +++123",
        "--2 - 123",
        "12---34",
        NULL
    };
    int expec[] = {43, -12, 123, 123, -1, -123, 123, 123, 2, 12};
    int i = 0;
 
    while (test[i])
    {
        int r = ft_atoi(test[i]);
        printf("Test \"%s\": Expec %d, Got %d\n", test[i], expec[i], r);
        i++;
        }
    return (0);
}
*/
int	is_sign_or_num(char c, char type)
{
	if (type == 's')
	{
		if (c == '-' || c == '+')
			return (1);
	}
	if (type == 'n')
	{
		if (c >= '0' && c <= '9')
			return (1);
	}
	return (0);
}

int	get_sign(char *str)
{
	int	i;
	int	is_nagative;

	i = 0;
	is_nagative = 0;
	while (str[i] && !is_sign_or_num(str[i], 'n'))
	{
		if (is_sign_or_num(str[i], 's'))
		{
			if (is_sign_or_num(str[i + 1], 's'))
			{
				if (str[i] == '-')
					is_nagative++;
			}
			else
			{
				if (str[i] == '-')
					is_nagative++;
			}
		}
		i++;
		is_nagative %= 2;
	}
	return (is_nagative);
}

char	*get_num_str(char *str)
{
	char static	c[100];
	int			j;
	int			k;

	j = 0;
	k = 0;
	while (str[k] && is_sign_or_num(str[k], 'n') == 0)
	{
		k++;
	}
	while (str[k] && is_sign_or_num(str[k], 'n') == 1)
	{
		c[j] = str[k];
		j++;
		k++;
	}
	c[j] = '\0';
	return (c);
}

int	str_2_int(char *str)
{
	int	output;
	int	o;

	output = 0;
	o = 0;
	while (str[o])
	{
		output *= 10;
		output += ((str[o] - '0'));
		o++;
	}
	return (output);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	num = str_2_int(get_num_str(str));
	sign = get_sign(str);
	if (sign == 1)
		return (-num);
	else
		return (num);
}
