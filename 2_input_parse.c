/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   2_input_parse.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 13:47:27 by qli           #+#    #+#                 */
/*   Updated: 2020/04/30 16:01:10 by qli           ########   odam.nl         */
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

/*
** parse element info
** validate and resize element info
** parse map info
** validate map info
*/

int		ft_parse_input(char *line, t_input *input)
{
	int i;

	i = 0;
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
