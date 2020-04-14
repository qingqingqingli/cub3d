/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_move_backward.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 11:18:55 by qli           #+#    #+#                 */
/*   Updated: 2020/04/14 17:56:51 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_move_backward(int keycode, t_input *input)
{
	if (keycode == KEY_DOWN)
	{
		if (input->array[(int)(position_x - direction_x * input->move.move_speed)]
		[(int)(position_y)] == '0')
			position_x = position_x - direction_x * input->move.move_speed;
		if (input->array[(int)(position_x)]
		[(int)(position_y - direction_y * input->move.move_speed)] == '0')
			position_y = position_y - direction_y * input->move.move_speed;
	}
	return (0);
}
