/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_step_direction.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/13 14:43:12 by qli           #+#    #+#                 */
/*   Updated: 2020/04/13 14:44:14 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_step_direction(t_input *input)
{
	if (ray_dir_x < 0)
		input->dda.step_x = -1;
	else
		input->dda.step_x = 1;
	if (ray_dir_y < 0)
		input->dda.step_y = -1;
	else
		input->dda.step_y = 1;
}
