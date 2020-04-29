/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_sprite_distance.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 14:24:05 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 10:57:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void 	ft_calculate_sprite_distance(t_input *input, int i)
{
	// input->sprite_data.sprite_order[i] = i;
	input->sprite_data.pos[i].distance = ((input->ray_casting.pos_x - input->sprite_data.pos[i].x) *
	(input->ray_casting.pos_x - input->sprite_data.pos[i].x)) + 
	((input->ray_casting.pos_y - input->sprite_data.pos[i].y) *
	(input->ray_casting.pos_y - input->sprite_data.pos[i].y));
}
