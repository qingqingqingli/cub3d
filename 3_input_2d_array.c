/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   3_input_2d_array.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 13:47:27 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 19:00:23 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_check_map(char *line)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (line[i] != '\0' && count <= 1)
	{
		if (line[i] == '0' || line[i] == '1' || line[i] == '2'
		|| ft_isspace(line[i]) == 1 || line[i] == '\n')
			i++;
		else if (line[i] == 'N' || line[i] == 'S' || line[i] == 'W'
		|| line[i] == 'E')
		{
			count++;
			i++;
		}
		else
			return (-1);
	}
	if (count >= 2)
		return (-1);
	return (1);
}

int		ft_check_spaces_nextline(char *line)
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

int		ft_lines_join(char *line, t_input *input)
{
	char	*new_line;
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	new_line = (char *)malloc((ft_strlen(input->line) + ft_strlen(line)
	+ 2) * sizeof(char));
	if (new_line == 0)
		return (ft_return_error("Error\nMalloc error\n", input));
	while (input->line[i1] != '\0')
	{
		new_line[i1] = input->line[i1];
		i1++;
	}
	new_line[i1] = '\n';
	i1++;
	while (line[i2] != '\0')
	{
		new_line[i1 + i2] = line[i2];
		i2++;
	}
	new_line[i1 + i2] = '\0';
	input->line = ft_strdup(new_line);
	free(new_line);
	return (0);
}

int		ft_process_map_line(char *line, t_input *input)
{
	if (ft_check_map(line) == 1 && ft_check_spaces_nextline(line) != 1)
	{
		if (ft_strncmp(input->line, "null", 6) == 0)
			input->line = ft_strdup(line);
		else
			ft_lines_join(line, input);
	}
	else if (ft_check_map(line) != -1 && ft_check_spaces_nextline(line) != 1)
		return (ft_return_error("Error\nInvalid map input\n", input));
	return (0);
}
