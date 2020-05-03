/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   2_parse_input.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 13:47:27 by qli           #+#    #+#                 */
/*   Updated: 2020/05/03 06:23:38 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_choose_element(char *line, t_input *input, int *i)
{
	if (line[*i] == 'R')
		ft_parse_res(line, input, i);
	else if (line[*i] == 'N')
		ft_parse_n(line, input, i);
	else if (line[*i] == 'S' && line[*i + 1] == 'O')
		ft_parse_s(line, input, i);
	else if (line[*i] == 'W')
		ft_parse_w(line, input, i);
	else if (line[*i] == 'E')
		ft_parse_e(line, input, i);
	else if (line[*i] == 'S' && ft_isspace(line[*i + 1]) == 1)
		ft_parse_sprite(line, input, i);
	else if (line[*i] == 'F' && ft_isspace(line[*i + 1]) == 1)
		ft_parse_floor(line, input, i);
	else if (line[*i] == 'C' && ft_isspace(line[*i + 1]) == 1)
		ft_parse_ceilling(line, input, i);
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	return (0);
}

int		ft_parse_input(char *line, t_input *input)
{
	int i;

	i = 0;
	if (line == NULL)
		return (ft_return_error("Error\nNo line\n", input));
	if (ft_check_element(*input) == 0)
	{
		while (line[i] != '\0' && ft_isspace(line[i]) == 1)
			i++;
		if (ft_char_range(line[i]) == 1)
			ft_choose_element(line, input, &i);
	}
	else if (ft_check_element(*input) == 1 && ft_validate_element(*input) == 0)
		return (ft_return_error("Error\nInvalid element input\n", input));
	else if (ft_check_element(*input) == 1 && ft_validate_element(*input) == 1)
	{
		ft_process_map_line(line, input);
		input->array = ft_split(input->line, '\n');
	}
	return (0);
}

int		ft_process_input_file(char **argv, t_input *input)
{
	int		fd;
	char	*line;
	int		output;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_return_error("Error\nOpen file error\n", input));
	output = get_next_line(fd, &line);
	if (output < 0)
		return (ft_return_error("Error\nRead line error\n", input));
	while (output == 1)
	{
		if (!line)
			return (ft_return_error("Error\nRead line error\n", input));
		ft_parse_input(line, input);
		// ft_validate_input(line, input);
		output = get_next_line(fd, &line);
		if (output < 0)
			return (ft_return_error("Error\nRead line error\n", input));
	}
	return (0);
}
