/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_step_direction.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/13 14:43:12 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 10:57:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void 	ft_step_direction(t_input *input)
{
	if (input->ray_casting.ray_direction_x < 0)
		input->dda.step_x = -1;
	else
		input->dda.step_x = 1;
	if (input->ray_casting.ray_direction_y < 0)
		input->dda.step_y = -1;
	else
		input->dda.step_y = 1;
}
