/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_set_player_orientation.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:22:54 by qli           #+#    #+#                 */
/*   Updated: 2020/04/27 10:41:36 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_set_player_orientation(t_input *input)
{
	if (input->ray_casting.sprawing_dir == 'S')
	{
		input->ray_casting.dir_x = 0;
		input->ray_casting.dir_y = 1;
	}
	else if (input->ray_casting.sprawing_dir == 'N')
	{
		input->ray_casting.dir_x = 0;
		input->ray_casting.dir_y = -1;
	}
	else if (input->ray_casting.sprawing_dir == 'W')
	{
		input->ray_casting.dir_x = -1;
		input->ray_casting.dir_y = 0;
	}
	else if (input->ray_casting.sprawing_dir == 'E')
	{
		input->ray_casting.dir_x = 1;
		input->ray_casting.dir_y = 0;
	}
}
