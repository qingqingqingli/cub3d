/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_inverse_camera.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 20:11:59 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_inverse_camera(t_input *input)
{
	input->sprite_data.inverse_camera = 1.0 /
	(input->ray_casting.plane_x * input->ray_casting.dir_y
	- input->ray_casting.dir_x * input->ray_casting.plane_y);
}
