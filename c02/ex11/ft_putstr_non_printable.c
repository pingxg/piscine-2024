/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:10:51 by pgao              #+#    #+#             */
/*   Updated: 2024/08/06 17:38:37 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
void ft_putstr_non_printable(char *str);

void test_ft_putstr_non_printable(void)
{
    char *test1 = "Hello World!";
    char *test2 = "Test\nNewLine\t";

    write(1, "Test 1: ", 8);
    ft_putstr_non_printable(test1);
    write(1, "\n", 1);

    write(1, "Test 2: ", 8);
    ft_putstr_non_printable(test2);
    write(1, "\n", 1);
}

int main(void)
{
    test_ft_putstr_non_printable();
    return 0;
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	b[2];
	char	c[17];

	i = 0;
	ft_strcpy(c, "0123456789abcdef");
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			b[0] = c[str[i] / 16];
			b[1] = c[str[i] % 16];
			write(1, b, 2);
		}
		i++;
	}
}
