/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_move_forward.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 11:18:55 by qli           #+#    #+#                 */
/*   Updated: 2020/04/25 12:19:47 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_move_forward(t_input *input)
{
	if (input->array[(int)(input->ray_casting.pos_x + input->ray_casting.dir_x * MOVE_SPEED)]
	[(int)(input->ray_casting.pos_y)] != '1')
		input->ray_casting.pos_x += input->ray_casting.dir_x * MOVE_SPEED;
	if (input->array[(int)(input->ray_casting.pos_x)]
	[(int)(input->ray_casting.pos_y + input->ray_casting.dir_y * MOVE_SPEED)] != '1')
		input->ray_casting.pos_y += input->ray_casting.dir_y * MOVE_SPEED;
	return (0);
}
