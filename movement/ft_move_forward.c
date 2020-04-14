/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_move_forward.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 11:18:55 by qli           #+#    #+#                 */
/*   Updated: 2020/04/14 11:38:06 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_move_forward(t_input *input)
{
	int x;
	int y;

	x = position_x;
	y = position_y + direction_y * input->move.move_speed;
	if (input->array[int(y)][int(x)] == '0')
		position_y = position_y + direction_y * input->move.move_speed;
}