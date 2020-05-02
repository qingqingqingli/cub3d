/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_sprite_color.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/24 09:40:50 by qli           #+#    #+#                 */
/*   Updated: 2020/05/01 17:25:06 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_get_sprite_color(t_input *input)
{
	input->sprite_data.sprite_color =
	input->sprite.addr[input->sprite_data.texture_x
	+ input->sprite_data.texture_y * input->sprite.line_length / 4];
}
