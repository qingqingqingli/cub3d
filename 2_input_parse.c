/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   2_input_parse.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 13:47:27 by qli           #+#    #+#                 */
/*   Updated: 2020/04/06 15:36:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_parse_r(char *line, t_input *input, int *i)
{
	*i = *i + 1;
	if (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
	{
		input->r_present = 1;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	while (input->r_present == 1 && line[*i] != '\0' && ft_isdigit(line[*i]) == 1)
	{
		input->r_xsize = input->r_xsize * 10 + line[*i] - '0';
		*i = *i + 1;
	}
	while (input->r_present == 1 && line[*i] != '\0' && ft_isspace(line[*i]) == 1)
		*i = *i + 1;
	while (input->r_present == 1 && line[*i] != '\0' && ft_isdigit(line[*i]) == 1)
	{
		input->r_ysize = input->r_ysize * 10 + line[*i] - '0';
		*i = *i + 1;
	}
}

void	ft_parse_n(char *line, t_input *input, int *i)
{
	if (line[*i] == 'N' && line[*i + 1] == 'O' && ft_isspace(line[*i + 2]) == 1)
	{
		input->north_present = 1;
		*i = *i + 2;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	while (*i > 0)
	{
		line++;
		*i = *i - 1;
	}
	if (input->north_present == 1)
		input->north_path = line;
}

void	ft_parse_s(char *line, t_input *input, int *i)
{
	if (line[*i] == 'S' && line[*i + 1] == 'O' && ft_isspace(line[*i + 2]) == 1)
	{
		input->south_present = 1;
		*i = *i + 2;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	while (input->south_present == 1 && *i > 0)
	{
		line++;
		*i = *i - 1;
	}
	if (input->south_present == 1)
		input->south_path = line;
}

void	ft_parse_w(char *line, t_input *input, int *i)
{
	if (line[*i] == 'W' && line[*i + 1] == 'E' && ft_isspace(line[*i + 2]) == 1)
	{
		input->west_present = 1;
		*i = *i + 2;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	while (input->west_present == 1 && *i > 0)
	{
		line++;
		*i = *i - 1;
	}
	if (input->west_present == 1)
		input->west_path = line;
}

void	ft_parse_e(char *line, t_input *input, int *i)
{
	if (line[*i] == 'E' && line[*i + 1] == 'A' && ft_isspace(line[*i + 2]) == 1)
	{
		input->east_present = 1;
		*i = *i + 2;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	while (input->east_present == 1 && *i > 0)
	{
		line++;
		*i = *i - 1;
	}
	if (input->east_present == 1)
		input->east_path = line;
}

void	ft_parse_sprite(char *line, t_input *input, int *i)
{
	if (line[*i] == 'S' && ft_isspace(line[*i + 1]) == 1)
	{
		input->sprite_present = 1;
		*i = *i + 1;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	while (input->sprite_present == 1 && *i > 0)
	{
		line++;
		*i = *i - 1;
	}
	if (input->sprite_present == 1)
		input->sprite_path = line;
}

void	ft_parse_floor(char *line, t_input *input, int *i)
{
	if (line[*i] == 'F' && ft_isspace(line[*i + 1]) == 1)
	{
		input->floor_present = 1;
		*i = *i + 1;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	while (line[*i] != '\0' && ft_isdigit(line[*i]) == 1)
	{
		input->floor_r = input->floor_r * 10 + line[*i] - '0';
		*i = *i + 1;
	}
	if (line[*i] == ',')
	{
		*i = *i + 1;
		while (line[*i] != '\0' && ft_isdigit(line[*i]) == 1)
		{
			input->floor_g = input->floor_g * 10 + line[*i] - '0';
			*i = *i + 1;
		}
	}
	if (line[*i] == ',')
	{
		*i = *i + 1;
		while (line[*i] != '\0' && ft_isdigit(line[*i]) == 1)
		{
			input->floor_b = input->floor_b * 10 + line[*i] - '0';
			*i = *i + 1;
		}
	}
}

void	ft_parse_ceilling(char *line, t_input *input, int *i)
{
	if (line[*i] == 'C' && ft_isspace(line[*i + 1]) == 1)
	{
		input->ceilling_present = 1;
		*i = *i + 1;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	while (line[*i] != '\0' && ft_isdigit(line[*i]) == 1)
	{
		input->ceilling_r = input->ceilling_r * 10 + line[*i] - '0';
		*i = *i + 1;
	}
	if (line[*i] == ',')
	{
		*i = *i + 1;
		while (line[*i] != '\0' && ft_isdigit(line[*i]) == 1)
		{
			input->ceilling_g = input->ceilling_g * 10 + line[*i] - '0';
			*i = *i + 1;
		}
	}
	if (line[*i] == ',')
	{
		*i = *i + 1;
		while (line[*i] != '\0' && ft_isdigit(line[*i]) == 1)
		{
			input->ceilling_b = input->ceilling_b * 10 + line[*i] - '0';
			*i = *i + 1;
		}
	}
}

void	ft_choose_element(char *line, t_input *input, int *i)
{
	if (line[*i] == 'R')
		ft_parse_r(line, input, i);
	else if (line[*i] == 'N' && line[*i + 1] == 'O')
		ft_parse_n(line, input, i);
	else if (line[*i] == 'S' && line[*i + 1] == 'O')
		ft_parse_s(line, input, i);
	else if (line[*i] == 'W' && line[*i + 1] == 'E')
		ft_parse_w(line, input, i);
	else if (line[*i] == 'E' && line[*i + 1] == 'A')
		ft_parse_e(line, input, i);
	else if (line[*i] == 'S' && ft_isspace(line[*i + 1]) == 1)
		ft_parse_sprite(line, input, i);
	else if (line[*i] == 'F' && ft_isspace(line[*i + 1]) == 1)
		ft_parse_floor(line, input, i);
	else if (line[*i] == 'C' && ft_isspace(line[*i + 1]) == 1)
		ft_parse_ceilling(line, input, i);
}

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
		return (ft_return_error("Invalid element input\n"));
	else if (ft_check_element(*input) == 1 && ft_validate_element(*input) == 1)
	{
		ft_process_map_line(line, input);
		input->array = ft_split(input->line, '\n');
	}
	return (0);
}
