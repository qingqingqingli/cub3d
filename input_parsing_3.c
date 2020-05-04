/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parsing_3.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/03 13:15:08 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 14:01:02 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_choose_element(t_input *input, int line, int *i)
{
	if (input->cub_array[line][*i] == 'R')
		ft_parse_res(input, line, i);
	else if (input->cub_array[line][*i] == 'N')
		ft_parse_n(input, line, i);
	else if (input->cub_array[line][*i] == 'S' &&
	input->cub_array[line][*i + 1] == 'O')
		ft_parse_s(input, line, i);
	else if (input->cub_array[line][*i] == 'W' &&
	input->cub_array[line][*i + 1] == 'E')
		ft_parse_w(input, line, i);
	else if (input->cub_array[line][*i] == 'E' &&
	input->cub_array[line][*i + 1] == 'A')
		ft_parse_e(input, line, i);
	else if (input->cub_array[line][*i] == 'S' &&
	ft_isspace(input->cub_array[line][*i + 1]) == 1)
		ft_parse_sprite(input, line, i);
	else if (input->cub_array[line][*i] == 'F' &&
	ft_isspace(input->cub_array[line][*i + 1]) == 1)
		ft_parse_floor(input, line, i);
	else if (input->cub_array[line][*i] == 'C' &&
	ft_isspace(input->cub_array[line][*i + 1]) == 1)
		ft_parse_ceilling(input, line, i);
	else
		return (ft_return_error("Error\nInvalid map input\n", input));
	return (0);
}

int		ft_check_element_line(t_input *input, int line)
{
	int i;

	i = 0;
	if (input->cub_array[line] == NULL)
		return (-1);
	while (input->cub_array[line][i] != '\0' &&
	ft_isspace(input->cub_array[line][i]) == 1)
		i++;
	if (ft_char_range(input->cub_array[line][i]) == 1)
	{
		input->element_line_present = 1;
		ft_choose_element(input, line, &i);
		return (1);
	}
	return (0);
}

int		ft_input_parsing(t_input *input)
{
	int	line;

	line = 0;
	while (input->cub_array[line] != NULL)
	{
		ft_check_element_line(input, line);
		if (ft_validate_map_line(input->cub_array[line]) == 1 &&
		ft_check_spaces(input->cub_array[line]) != 1)
		{
			input->map_line_present = 1;
			if (ft_validate_element(input) == -1)
				return (ft_return_error("Error\nInvalid input\n", input));
			if (ft_strncmp(input->line, "null", 6) == 0)
				input->line = ft_strdup(input->cub_array[line]);
			else
				ft_lines_join(input->cub_array[line], input, 0, 0);
		}
		if (input->map_line_present == 1 &&
		ft_check_next_line(input->cub_array[line]) == 1)
			return (0);
		line++;
	}
	return (0);
}
