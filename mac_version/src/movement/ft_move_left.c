/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_move_left.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/01 11:49:26 by qli           #+#    #+#                 */
/*   Updated: 2020/05/06 16:27:19 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_move_left(t_input *input)
{
	double new_pos_y;
	double new_pos_x;
	double temp;

	temp = 0;
	new_pos_y = input->ray_casting.pos_y -
	input->ray_casting.dir_x * MOVE_SPEED;
	new_pos_x = input->ray_casting.pos_x +
	input->ray_casting.dir_y * MOVE_SPEED;
	if (input->ray_casting.dir_x == 0 || input->ray_casting.dir_y == 0)
	{
		if (input->ray_casting.sprawing_dir == 'S' ||
		input->ray_casting.sprawing_dir == 'W')
			temp = 0.1;
		else
			temp = -0.1;
	}
	if (input->array[(int)(new_pos_y + temp)]
	[(int)(input->ray_casting.pos_x)] != '1'
	&& input->array[(int)(input->ray_casting.pos_y)]
	[(int)(new_pos_x + temp)] != '1')
	{
		input->ray_casting.pos_y = new_pos_y;
		input->ray_casting.pos_x = new_pos_x;
	}
}
