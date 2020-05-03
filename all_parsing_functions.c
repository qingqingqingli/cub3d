/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   all_parsing_functions.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/03 12:31:41 by qli           #+#    #+#                 */
/*   Updated: 2020/05/03 17:26:51 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_parse_input_2(char *line, t_input *input)
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



/* need to use mlx_get_screen_sizen */
void	ft_reset_resolution(t_input *input)
{
	input->res_x_present = 800;
	input->res_y_present = 800;
	if (input->res_present == 1)
	{
		if (input->res_x > input->res_x_present || input->res_x < 0)
			input->res_x = input->res_x_present;
		if (input->res_y > input->res_y_present || input->res_y < 0)
			input->res_y = input->res_y_present;
	}
}

int		ft_validate_input(char *line, t_input *input)
{
	ft_reset_resolution(input);
	ft_check_map_line(line);
	return (0);
}

int		ft_process_map_line(char *line, t_input *input)
{
	if (ft_check_map(line, input) == 1 && ft_check_spaces_nextline(line) != 1)
	{
		if (ft_strncmp(input->line, "null", 6) == 0)
			input->line = ft_strdup(line);
		else
			ft_lines_join(line, input);
	}
	else if (ft_check_map(line, input) != -1 &&
	ft_check_spaces_nextline(line) != 1)
		return (ft_return_error("Error\nInvalid map input\n", input));
	return (0);
}
