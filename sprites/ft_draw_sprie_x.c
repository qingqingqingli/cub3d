/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_draw_sprie_x.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 18:38:41 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 10:57:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void 	ft_draw_sprite_x(t_input *input)
{
	input->sprite_data.draw_start_x = -input->sprite_data.sprite_width / 2
	+ input->sprite_data.sprite_screen_x;
	if (input->sprite_data.draw_start_x < 0)
		input->sprite_data.draw_start_x = 0;
	input->sprite_data.draw_end_x = input->sprite_data.sprite_width / 2
	+ input->sprite_data.sprite_screen_x;
	if (input->sprite_data.draw_end_x >= input->res_x)
		input->sprite_data.draw_end_x = input->res_x - 1;
}