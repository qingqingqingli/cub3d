/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   3_validate_input_new.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/03 05:54:50 by qli           #+#    #+#                 */
/*   Updated: 2020/05/03 06:00:42 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

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
