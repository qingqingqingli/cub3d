/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parse.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 13:47:27 by qli            #+#    #+#                */
/*   Updated: 2020/03/11 14:24:29 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#define LINE_COUNT 1000

int 	ft_check_map(char *line)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (line[i] != '\0' && count <= 1)
	{
		if (line[i] != '0' && line[i] != '1' && line[i] != '2'
		&& line[i] != 'N' && line[i] != 'S' && line[i] != 'W'
		&& line[i] != 'E' && ft_isspace(line[i]) != 1)
			return (0);
		if (line[i] == 'N' || line[i] == 'S' || line[i] == 'W'
		|| line[i] == 'E')
			count++;
	}
	if (count >= 2)
		return (0);
	return (1);
}

int		ft_create_2d_array(char *line)
{
	static char **array;
	static int y;
	int len;

	y = 0;
	len = ft_strlen(line);
	if (!**array)
		*array = (char *)malloc(LINE_COUNT * sizeof(char *));
	if (line)
	{
		array[y] = (char *) malloc((len + 1) * sizeof(char));
		array[y] = ft_strdup(line);
		y++;
	}
	return (0);
}
