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

void		ft_parse_r(char *line, t_input *input, int *i)
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

void	ft_choose_element(char *line, t_input *input, int *i)
{
	if (line[*i] == 'R')
		ft_parse_r(line, input, i);
}

int		ft_parse_input(char *line, t_input *input)
{
	int i;

	i = 0;
	while (line[i] != '\0' && ft_isspace(line[i]) == 1)
		i++;
	// printf("line[i] is %c\n", line[i]);
	if (ft_char_range(line[i]) == 1)
		ft_choose_element(line, input, &i);
	return (0);
}
