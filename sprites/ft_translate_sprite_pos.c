/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_translate_sprite_pos.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 15:18:32 by qli           #+#    #+#                 */
/*   Updated: 2020/04/25 12:12:46 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_translate_sprite_pos(t_input *input, int i)
{
	input->sprite_data.sprite_x = input->sprite_data.sprite_pos[i][0]
	- input->ray_casting.pos_x;
	input->sprite_data.sprite_y = input->sprite_data.sprite_pos[i][1]
	- input->ray_casting.pos_y;
}
