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

int 	ft_check_map(char *line)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (line[i] != '\0' && count <= 1)
	{
		if (line[i] == '0' || line[i] == '1' || line[i] != '2'|| ft_isspace(line[i]) == 1)
			i++;
		else if (line[i] == 'N' || line[i] == 'S' || line[i] == 'W'
		|| line[i] == 'E')
		{
			count++;
			i++;
		}
		else
			return(-1);
	}
	if (count >= 2)
		return (-1);
	return (1);
}

int 	ft_check_spaces_nextline(char *line)
{
	int i;

	i = 0;
	while (line[i] != '\0')
	{
		if (ft_isspace(line[i]) == 1 || line[i] == '\n')
			i++;
		else
			return (0);
	}
	return (1);
}

int		ft_create_2d_array(char *line, t_input *input)
{
	if (ft_check_map(line) == 1 && ft_check_spaces_nextline(line) != 1)
	{
		input->line = line;
		printf("%s\n", input->line);
	}
	else if (ft_check_map(line) != -1 && ft_check_spaces_nextline(line) != 1)
		return (ft_return_error("Invalid map input\n"));
	return (0);
}
