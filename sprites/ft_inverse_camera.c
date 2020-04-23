/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_inverse_camera.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 20:11:59 by qli           #+#    #+#                 */
/*   Updated: 2020/04/23 09:34:13 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_inverse_camera(t_input *input)
{
	input->sprite_data.inverse_camera = 1.0 / (plane_dir_x * direction_y -
	direction_x * plane_dir_y);
}
