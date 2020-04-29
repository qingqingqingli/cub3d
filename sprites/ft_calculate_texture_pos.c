/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_texture_pos.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/24 09:54:02 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:43:40 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_calculate_sprite_texture_x(t_input *input, int stripe)
{
	input->sprite_data.texture_x = (int)(256 * (stripe -
	(-input->sprite_data.sprite_width / 2 +
	input->sprite_data.sprite_screen_x)) * input->sprite.texture_width
	/ input->sprite_data.sprite_width) / 256;
}

void	ft_calculate_sprite_texture_y(t_input *input, int y)
{
	int d;

	d = y * 256 - input->res_y * 128 +
	input->sprite_data.sprite_height * 128;
	input->sprite_data.texture_y = ((d * input->sprite.texture_height)
	/ input->sprite_data.sprite_height) / 256;
}
