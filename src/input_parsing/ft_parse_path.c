/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_parse_path.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/30 13:10:04 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

int		ft_parse_n(t_input *input, int line, int *i)
{
	if (input->north_present == 1)
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (input->cub_array[line][*i] == 'N' &&
	input->cub_array[line][*i + 1] == 'O' &&
	ft_isspace(input->cub_array[line][*i + 2]) == 1)
	{
		input->north_present = 1;
		*i = *i + 2;
		while (input->cub_array[line][*i] != '\0' &&
		ft_isspace(input->cub_array[line][*i]) == 1)
			*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	while (input->north_present == 1 && *i > 0)
	{
		input->cub_array[line] = input->cub_array[line] + 1;
		*i = *i - 1;
	}
	if (input->north_present == 1)
		input->north_path = input->cub_array[line];
	return (0);
}

int		ft_parse_s(t_input *input, int line, int *i)
{
	if (input->south_present == 1)
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (input->cub_array[line][*i] == 'S' &&
	input->cub_array[line][*i + 1] == 'O' &&
	ft_isspace(input->cub_array[line][*i + 2]) == 1)
	{
		input->south_present = 1;
		*i = *i + 2;
		while (input->cub_array[line][*i] != '\0' &&
		ft_isspace(input->cub_array[line][*i]) == 1)
			*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	while (input->south_present == 1 && *i > 0)
	{
		input->cub_array[line] = input->cub_array[line] + 1;
		*i = *i - 1;
	}
	if (input->south_present == 1)
		input->south_path = input->cub_array[line];
	return (0);
}

int		ft_parse_w(t_input *input, int line, int *i)
{
	if (input->west_present == 1)
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (input->cub_array[line][*i] == 'W' &&
	input->cub_array[line][*i + 1] == 'E' &&
	ft_isspace(input->cub_array[line][*i + 2]) == 1)
	{
		input->west_present = 1;
		*i = *i + 2;
		while (input->cub_array[line][*i] != '\0' &&
		ft_isspace(input->cub_array[line][*i]) == 1)
			*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	while (input->west_present == 1 && *i > 0)
	{
		input->cub_array[line] = input->cub_array[line] + 1;
		*i = *i - 1;
	}
	if (input->west_present == 1)
		input->west_path = input->cub_array[line];
	return (0);
}

int		ft_parse_e(t_input *input, int line, int *i)
{
	if (input->east_present == 1)
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (input->cub_array[line][*i] == 'E' &&
	input->cub_array[line][*i + 1] == 'A' &&
	ft_isspace(input->cub_array[line][*i + 2]) == 1)
	{
		input->east_present = 1;
		*i = *i + 2;
		while (input->cub_array[line][*i] != '\0' &&
		ft_isspace(input->cub_array[line][*i]) == 1)
			*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	while (input->east_present == 1 && *i > 0)
	{
		input->cub_array[line] = input->cub_array[line] + 1;
		*i = *i - 1;
	}
	if (input->east_present == 1)
		input->east_path = input->cub_array[line];
	return (0);
}

int		ft_parse_sprite(t_input *input, int line, int *i)
{
	if (input->sprite_present == 1)
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (input->cub_array[line][*i] == 'S' &&
	ft_isspace(input->cub_array[line][*i + 1]) == 1)
	{
		input->sprite_present = 1;
		*i = *i + 2;
		while (input->cub_array[line][*i] != '\0' &&
		ft_isspace(input->cub_array[line][*i]) == 1)
			*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	while (input->sprite_present == 1 && *i > 0)
	{
		input->cub_array[line] = input->cub_array[line] + 1;
		*i = *i - 1;
	}
	if (input->sprite_present == 1)
		input->sprite_path = input->cub_array[line];
	return (0);
}
