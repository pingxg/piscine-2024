/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:07:43 by pgao              #+#    #+#             */
/*   Updated: 2024/08/06 13:51:13 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{	
	char str[] = "345ssalut, s Quarante-Deux; Cinquante+Et+Un";
	printf("%s", ft_strcapitalize(str));
}
*/
int	check_alpha_num(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_lowerstr(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
		{
			str[j] += 'a' - 'A';
		}
		j++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_new_word;
	int	is_alpha_num;

	i = 0;
	is_new_word = 1;
	str = ft_lowerstr(str);
	while (str[i])
	{
		is_alpha_num = check_alpha_num(str[i]);
		if (is_alpha_num == 1)
		{
			if (is_new_word == 1 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 'a' - 'A';
			}
			is_new_word = 0;
		}
		else
		{
			is_new_word = 1;
		}
		i++;
	}
	return (str);
}
