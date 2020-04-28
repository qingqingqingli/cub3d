/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_move_forward.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 11:18:55 by qli           #+#    #+#                 */
/*   Updated: 2020/04/27 11:37:50 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_move_forward(t_input *input)
{
	if (input->array[(int)(input->ray_casting.pos_y + input->ray_casting.dir_y * MOVE_SPEED)]
	[(int)(input->ray_casting.pos_x)] != '1')
		input->ray_casting.pos_y += input->ray_casting.dir_y * MOVE_SPEED;
	if (input->array[(int)(input->ray_casting.pos_y)]
	[(int)(input->ray_casting.pos_x + input->ray_casting.dir_x * MOVE_SPEED)] != '1')
		input->ray_casting.pos_x += input->ray_casting.dir_x * MOVE_SPEED;
	return (0);
}
