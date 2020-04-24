/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_transform_sprite.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 16:41:03 by qli           #+#    #+#                 */
/*   Updated: 2020/04/24 13:37:38 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_transform_sprite(t_input *input)
{
	input->sprite_data.transform_x = input->sprite_data.inverse_camera *
	(direction_y * input->sprite_data.sprite_x - direction_x * 
	input->sprite_data.sprite_y);
	input->sprite_data.transform_y = input->sprite_data.inverse_camera *
	(-plane_dir_y * input->sprite_data.sprite_x + plane_dir_x * 
	input->sprite_data.sprite_y);
}
