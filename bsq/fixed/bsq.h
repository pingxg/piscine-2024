/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:21:05 by pgao              #+#    #+#             */
/*   Updated: 2024/08/20 09:21:08 by pgao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFFER_SIZE 8192

typedef struct s_map
{
	int		width;
	int		height;
	int		sx;
	int		sy;
	int		square;
	char	emp;
	char	obs;
	char	full;
	char	*ct;
}	t_map;

int		ft_atoi(char *str);
int		validate(t_map *map);
int		read_and_solve_map(char *filename);
int		read_and_solve_from_stdin(void);
void	remove_newlines(t_map *map);
t_map	*get_content(int fd, t_map *map);
int		get_first_l(int fd, t_map *map);
int		ft_checksq(t_map *s, int x, int y);
int		ft_chk_tsq(t_map *s, int x, int y, int tsquare);
void	ft_solution(t_map *s);
void	ft_chk_upsq(t_map *s, int x, int y);
void	ft_print_map(t_map *s);
void	ft_change_map(t_map *s);

#endif