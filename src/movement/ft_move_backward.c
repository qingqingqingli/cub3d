/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_move_backward.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 11:18:55 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_move_backward(t_input *input)
{
	double new_pos_y;
	double new_pos_x;

	new_pos_y = input->ray_casting.pos_y -
	input->ray_casting.dir_y * MOVE_SPEED;
	new_pos_x = input->ray_casting.pos_x -
	input->ray_casting.dir_x * MOVE_SPEED;
	if (input->array[(int)(new_pos_y)][(int)(input->ray_casting.pos_x)] != '1')
		input->ray_casting.pos_y = new_pos_y;
	if (input->array[(int)(input->ray_casting.pos_y)][(int)(new_pos_x)] != '1')
		input->ray_casting.pos_x = new_pos_x;
}
