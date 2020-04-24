/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_sprite_color.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/24 09:40:50 by qli           #+#    #+#                 */
/*   Updated: 2020/04/24 19:51:08 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_get_sprite_color(t_input *input)
{
	// int pixel;

	input->sprite_data.sprite_color = input->sprite.addr[input->sprite_data.texture_x
	+ input->sprite_data.texture_y	* input->sprite.line_length / 4];
	// pixel = ((input->sprite_data.texture_y * input->sprite.line_length) + 
	// (input->sprite_data.texture_x * (input->sprite.bits_per_pixel / 8)));
	// input->sprite_data.sprite_color = *(unsigned int *)(input->sprite.addr + pixel);
}
