/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_transform_sprite.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 16:41:03 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 10:57:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void 	ft_transform_sprite(t_input *input)
{
	input->sprite_data.transform_x = input->sprite_data.inverse_camera *
	(input->ray_casting.dir_y * input->sprite_data.sprite_x - input->ray_casting.dir_x * 
	input->sprite_data.sprite_y);
	input->sprite_data.transform_y = input->sprite_data.inverse_camera *
	(-input->ray_casting.plane_y * input->sprite_data.sprite_x + input->ray_casting.plane_x * 
	input->sprite_data.sprite_y);
}
