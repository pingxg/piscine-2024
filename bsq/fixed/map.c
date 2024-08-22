/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:21:31 by pgao              #+#    #+#             */
/*   Updated: 2024/08/20 09:21:33 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_first_l(int fd, t_map *map)
{
	char	buffer[BUFFER_SIZE];
	int		len;

	len = 0;
	while (read(fd, &buffer[len], 1) > 0 && buffer[len] != '\n')
		len++;
	if (len < 4)
		return (0);
	// Should have \0 in the end, 11103
	map->height = ft_atoi(buffer); // What if 'empty' is a number? 110x#
	if (map->height <= 0)
		return (0);
	map->emp = buffer[len - 3];
	map->obs = buffer[len - 2];
	map->full = buffer[len - 1];
	if (map->emp == map->obs || map->emp == map->full || map->obs == map->full)
		return (0);
	return (1);
}

t_map	*get_content(int fd, t_map *map)
{
	char	buffer[BUFFER_SIZE];
	int		bytes_read;
	int		total_length;
	int		max_size;
	int		i;

	max_size = map->height * (BUFFER_SIZE + 1);
	map->ct = (char *)malloc(max_size + 1);
	if (!map->ct)
		return (NULL);
	total_length = 0;
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		i = 0;
		while (i < bytes_read) // Could skip the newlines here
			map->ct[total_length++] = buffer[i++];
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	map->ct[total_length] = '\0';
	map->width = 0;
	while (map->ct[map->width] != '\n' && map->ct[map->width] != '\0')
		map->width++;
	return (map);
}

int	validate(t_map *map)
{
	int	i;
	int	line_count;
	int	char_count;

	i = 0;
	line_count = 0;
	char_count = 0;
	while (map->ct[i])
	{
		if (map->ct[i] == '\n')
		{
			if (char_count != map->width)
				return (0);
			line_count++;
			char_count = 0;
		}
		else if (map->ct[i] != map->emp && map->ct[i]
			!= map->obs && map->ct[i] != map->full)
			return (0);
		else
			char_count++;
		i++;
	}
	remove_newlines(map);
	return (line_count == map->height);
}

int	read_and_solve_map(char *filename)
{
	int		fd;
	t_map	map;

	// This would be the moment to initialize the struct, ct=NULL
	// map.ct=NULL;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	if (!get_first_l(fd, &map) || !get_content(fd, &map) || !validate(&map))
	{
		free(map.ct); // Might not be allocated yet
		close(fd);
		return (0);
	}
	else
	{
		// Better close the file immediately
		ft_solution(&map);
		free(map.ct);
		close(fd);
	}
	return (1);
}

int	read_and_solve_from_stdin(void)
{
	t_map	map;

	if (!get_first_l(STDIN_FILENO, &map)
		|| !get_content(STDIN_FILENO, &map) || !validate(&map))
		return (0);
	ft_solution(&map);
	free(map.ct);
	return (1);
}
