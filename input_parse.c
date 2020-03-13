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

void	ft_parse_r(char *line, t_input *input, int *i)
{
	input->r_present = 1;
	*i = *i + 1;
	while (line[*i] != '\0' && ft_isspace(line[*i] == 1))
		*i = *i + 1;
	*i = *i + 1;
	if (ft_isdigit(line[*i]) == 1)
	{
		while (line[*i] != '\0' && ft_isdigit(line[*i]) == 1)
		{
			input->r_xsize = input->r_xsize * 10 + line[*i] - '0';
			*i = *i + 1;
		}
	}
	while (line[*i] != '\0' && ft_isspace(line[*i] == 1))
		*i = *i + 1;
	while (line[*i] != '\0' && ft_isdigit(line[*i]) == 1)
	{
		input->r_ysize = input->r_ysize * 10 + line[*i] - '0';
		*i = *i + 1;
	}
}

int		ft_parse_element(char *line, t_input *input, int *i)
{
	if (line[*i] == 'R')
		ft_parse_r(line, input, i);
	else
		return (ft_return_error("Not valid element\n"));
	return (0);
}

int		ft_parse_input(char *line, t_input *input)
{
	int		i;

	i = 0;
	while (line[i] != '\0' && ft_isspace(line[i] == 1))
		i++;
	if (line[i] != '\0' && ft_char_range(line[i]) == 1)
		ft_parse_element(line, input, &i);
	// else if (line[i] != '\0' && line[i] != '1')
	// 	ft_parse_map(line, input);
	ft_print_input(*input); //print input struct
	return (0);
}
