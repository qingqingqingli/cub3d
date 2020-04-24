/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_sprite_distance.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 14:24:05 by qli           #+#    #+#                 */
/*   Updated: 2020/04/24 12:15:06 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_sprite_distance(t_input *input, int i)
{
	input->sprite_data.sprite_order[i] = i;
	input->sprite_data.sprite_distance[i] = ((position_x - input->sprite_data.sprite_pos[i][0]) *
	(position_x - input->sprite_data.sprite_pos[i][0])) + 
	((position_y - input->sprite_data.sprite_pos[i][1]) *
	(position_y - input->sprite_data.sprite_pos[i][1]));
}
