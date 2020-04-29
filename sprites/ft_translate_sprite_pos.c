/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_translate_sprite_pos.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 15:18:32 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:48:33 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_translate_sprite_pos(t_input *input, int i)
{
	input->sprite_data.sprite_x = input->sprite_data.pos[i].x
	- input->ray_casting.pos_x;
	input->sprite_data.sprite_y = input->sprite_data.pos[i].y
	- input->ray_casting.pos_y;
}
