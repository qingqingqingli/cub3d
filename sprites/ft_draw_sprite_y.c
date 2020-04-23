/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_draw_sprite_y.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:19:43 by qli           #+#    #+#                 */
/*   Updated: 2020/04/23 17:30:29 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_draw_sprite_y(t_input *input)
{
	input->sprite_data.draw_start_y = -input->sprite_data.sprite_height / 2
	+ input->res_y / 2;
	if (input->sprite_data.draw_start_y < 0)
		input->sprite_data.draw_start_y = 0;
	input->sprite_data.draw_end_y = input->sprite_data.sprite_height / 2
	+ input->res_y / 2;
	if (input->sprite_data.draw_end_y >= input->res_y)
		input->sprite_data.draw_end_y = input->res_y - 1;
}
