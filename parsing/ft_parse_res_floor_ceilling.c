/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_parse_res_floor_ceilling.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/30 14:07:37 by qli           #+#    #+#                 */
/*   Updated: 2020/04/30 15:02:20 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_parse_number(char *line, int *element, int *i)
{
	while (line[*i] != '\0' && ft_isspace(line[*i]) == 1)
		*i = *i + 1;
	if (line[*i] == '-')
		return (-1);
	else if (line[*i] == '+')
		*i = *i + 1;
	while (line[*i] != '\0' && ft_isdigit(line[*i]) == 1)
	{
		*element = *element * 10 + line[*i] - '0';
		*i = *i + 1;
	}
	return (*i);
}

int		ft_parse_floor(char *line, t_input *input, int *i)
{
	if (input->floor_present == 1)
		return (ft_return_error("Error\nRedundant element input\n", input));
	if (line[*i] == 'F' && ft_isspace(line[*i + 1]) == 1)
	{
		input->floor_present = 1;
		*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (ft_parse_number(line, &input->floor_r, i) == -1)
		return (ft_return_error("Error\nNegative element input\n", input));
	if (line[*i] == ',')
	{
		*i = *i + 1;
		if (ft_parse_number(line, &input->floor_g, i) == -1)
			return (ft_return_error("Error\nNegative element input\n", input));
	}
	if (line[*i] == ',')
	{
		*i = *i + 1;
		if (ft_parse_number(line, &input->floor_b, i) == -1)
			return (ft_return_error("Error\nNegative element input\n", input));
	}
	return (0);
}

int		ft_parse_ceilling(char *line, t_input *input, int *i)
{
	if (input->ceilling_present == 1)
		return (ft_return_error("Error\nRedundant element input\n", input));
	if (line[*i] == 'C' && ft_isspace(line[*i + 1]) == 1)
	{
		input->ceilling_present = 1;
		*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (ft_parse_number(line, &input->ceilling_r, i) == -1)
		return (ft_return_error("Error\nNegative element input\n", input));
	if (line[*i] == ',')
	{
		*i = *i + 1;
		if (ft_parse_number(line, &input->ceilling_g, i) == -1)
			return (ft_return_error("Error\nNegative element input\n", input));
	}
	if (line[*i] == ',')
	{
		*i = *i + 1;
		if (ft_parse_number(line, &input->ceilling_b, i) == -1)
			return (ft_return_error("Error\nNegative element input\n", input));
	}
	return (0);
}

int		ft_parse_res(char *line, t_input *input, int *i)
{
	if (input->res_present == 1)
		return (ft_return_error("Error\nRedundant element input\n", input));
	if (line[*i] == 'R' && ft_isspace(line[*i + 1]) == 1)
	{
		input->res_present = 1;
		*i = *i + 1;
	}
	if (ft_parse_number(line, &input->res_x, i) == -1)
		return (ft_return_error("Error\nNegative element input\n", input));
	if (ft_parse_number(line, &input->res_y, i) == -1)
		return (ft_return_error("Error\nNegative element input\n", input));
	return (0);
}
