/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_parse_path.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/30 13:10:04 by qli           #+#    #+#                 */
/*   Updated: 2020/04/30 14:12:36 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_parse_n(char *line, t_input *input, int *i)
{
	if (input->north_present == 1)
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (line[*i] == 'N' && line[*i + 1] == 'O' && ft_isspace(line[*i + 2]) == 1)
	{
		input->north_present = 1;
		*i = *i + 2;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	while (input->north_present == 1 && *i > 0)
	{
		line++;
		*i = *i - 1;
	}
	if (input->north_present == 1)
		input->north_path = line;
	return (0);
}

int		ft_parse_s(char *line, t_input *input, int *i)
{
	if (input->south_present == 1)
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (line[*i] == 'S' && line[*i + 1] == 'O' && ft_isspace(line[*i + 2]) == 1)
	{
		input->south_present = 1;
		*i = *i + 2;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	while (input->south_present == 1 && *i > 0)
	{
		line++;
		*i = *i - 1;
	}
	if (input->south_present == 1)
		input->south_path = line;
	return (0);
}

int		ft_parse_w(char *line, t_input *input, int *i)
{
	if (input->west_present == 1)
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (line[*i] == 'W' && line[*i + 1] == 'E' && ft_isspace(line[*i + 2]) == 1)
	{
		input->west_present = 1;
		*i = *i + 2;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	while (input->west_present == 1 && *i > 0)
	{
		line++;
		*i = *i - 1;
	}
	if (input->west_present == 1)
		input->west_path = line;
	return (0);
}

int		ft_parse_e(char *line, t_input *input, int *i)
{
	if (input->east_present == 1)
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (line[*i] == 'E' && line[*i + 1] == 'A' && ft_isspace(line[*i + 2]) == 1)
	{
		input->east_present = 1;
		*i = *i + 2;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	while (input->east_present == 1 && *i > 0)
	{
		line++;
		*i = *i - 1;
	}
	if (input->east_present == 1)
		input->east_path = line;
	return (0);
}

int		ft_parse_sprite(char *line, t_input *input, int *i)
{
	if (input->sprite_present == 1)
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (line[*i] == 'S' && ft_isspace(line[*i + 1]) == 1)
	{
		input->sprite_present = 1;
		*i = *i + 1;
		while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
			*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	while (input->sprite_present == 1 && *i > 0)
	{
		line++;
		*i = *i - 1;
	}
	if (input->sprite_present == 1)
		input->sprite_path = line;
	return (0);
}
