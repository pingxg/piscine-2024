/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:04:21 by pgao              #+#    #+#             */
/*   Updated: 2024/08/14 15:28:03 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
/*
char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[] = {"", "", ""};
	char	*sep = " ";
	char	*result;

	result = ft_strjoin(3, strs, sep);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}
*/
int	ft_get_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_tot_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_get_len(strs[i]);
		i++;
	}
	j += ((size - 1) * ft_get_len(sep)) + 1;
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (size <= 0)
	{
		output = (char *)malloc(sizeof(char));
		*output = 0;
		return (output);
	}
	output = (char *)malloc(sizeof(char) * get_tot_len(size, strs, sep));
	if (!output)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			output[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			output[k++] = sep[j++];
		i++;
	}
	output[k] = '\0';
	return (output);
}
