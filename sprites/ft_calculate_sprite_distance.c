/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_sprite_distance.c                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 14:24:05 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:41:47 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_calculate_sprite_distance(t_input *input, int i)
{
	double x;
	double y;

	x = input->ray_casting.pos_x - input->sprite_data.pos[i].x;
	y = input->ray_casting.pos_y - input->sprite_data.pos[i].y;
	input->sprite_data.pos[i].distance = x * x + y * y;
}
