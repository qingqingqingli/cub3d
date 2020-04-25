/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_sprite_distance.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 14:24:05 by qli           #+#    #+#                 */
/*   Updated: 2020/04/25 12:12:22 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_sprite_distance(t_input *input, int i)
{
	input->sprite_data.sprite_order[i] = i;
	input->sprite_data.sprite_distance[i] = ((input->ray_casting.pos_x - input->sprite_data.sprite_pos[i][0]) *
	(input->ray_casting.pos_x - input->sprite_data.sprite_pos[i][0])) + 
	((input->ray_casting.pos_y - input->sprite_data.sprite_pos[i][1]) *
	(input->ray_casting.pos_y - input->sprite_data.sprite_pos[i][1]));
}
