/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_move_left.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/01 11:49:26 by qli           #+#    #+#                 */
/*   Updated: 2020/05/01 11:49:39 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_move_left(t_input *input)
{
	if (input->array[(int)(input->ray_casting.pos_y - input->ray_casting.dir_x * MOVE_SPEED)]
	[(int)(input->ray_casting.pos_x)] != '1' && input->array[(int)(input->ray_casting.pos_y)]
	[(int)(input->ray_casting.pos_x + input->ray_casting.dir_y * MOVE_SPEED)] != '1')
	{
		input->ray_casting.pos_y -= input->ray_casting.dir_x * MOVE_SPEED;
		input->ray_casting.pos_x += input->ray_casting.dir_y * MOVE_SPEED;
	}
}
