/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_move_forward.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 11:18:55 by qli           #+#    #+#                 */
/*   Updated: 2020/04/15 12:06:53 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_move_forward(t_input *input)
{
	if (input->array[(int)(position_x + direction_x * MOVE_SPEED)]
	[(int)(position_y)] != '1')
		position_x = position_x + direction_x * MOVE_SPEED;
	if (input->array[(int)(position_x)]
	[(int)(position_y + direction_y * MOVE_SPEED)] != '1')
		position_y = position_y + direction_y * MOVE_SPEED;
	return (0);
}
