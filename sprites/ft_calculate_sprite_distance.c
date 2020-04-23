/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_sprite_distance.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 14:24:05 by qli           #+#    #+#                 */
/*   Updated: 2020/04/23 15:17:09 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_sprite_distance(t_input *input, int i)
{
	int x;
	int y;

	x = input->sprite_data.sprite_pos[i][0];
	y = input->sprite_data.sprite_pos[i][1];

	input->sprite_data.sprite_order[i] = i;
	input->sprite_data.sprite_distance[i] = ((position_x - x) * (position_x - x)) * 
	((position_y - y) * (position_y - y));
}
