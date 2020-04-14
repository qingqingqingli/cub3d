/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_move_forward.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 11:18:55 by qli           #+#    #+#                 */
/*   Updated: 2020/04/14 17:54:57 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_move_forward(int keycode, t_input *input)
{
	if (keycode == KEY_UP)
	{
		if (input->array[(int)(position_x + direction_x * input->move.move_speed)]
		[(int)(position_y)] == '0')
			position_x = position_x + direction_x * input->move.move_speed;
		if (input->array[(int)(position_x)]
		[(int)(position_y + direction_y * input->move.move_speed)] == '0')
			position_y = position_y + direction_y * input->move.move_speed;
	}
	return (0);
}
