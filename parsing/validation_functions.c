/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_validate_map_line.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/03 17:21:12 by qli           #+#    #+#                 */
/*   Updated: 2020/05/03 17:21:48 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_validate_map_line(char *line)
{
	int i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] != '0' && line[i] != '1' && line[i] != '2'
		&& line[i] != ' ' && line[i] != 'N' && line[i] != 'S'
		&& line[i] != 'W' && line[i] != 'E')
			return (-1);
		else
			i++;
	}
	return (1);
}

int		ft_check_spaces(char *line)
{
	int i;

	i = 0;
	while (line[i] != '\0')
	{
		if (ft_isspace(line[i]) == 1)
			i++;
		else
			return (0);
	}
	return (1);
}

int		ft_check_next_line(char *line)
{
	int i;

	i = 0;
	while (line[i] != '\0' && i <= 1)
	{
		if (line[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
