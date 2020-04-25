/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_set_plane_orientation.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:24:15 by qli           #+#    #+#                 */
/*   Updated: 2020/04/25 12:32:32 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

/*
** From original
** S <-> N
** E <-> W
*/

void	ft_set_plane_orientation(t_input *input)
{
	if (input->ray_casting.sprawing_dir == 'W')
	{
		input->ray_casting.plane_x = 0.66;
		input->ray_casting.plane_y = 0;
	}
	else if (input->ray_casting.sprawing_dir == 'E')
	{
		input->ray_casting.plane_x = -0.66;
		input->ray_casting.plane_y = 0;
	}
	else if (input->ray_casting.sprawing_dir == 'N')
	{
		input->ray_casting.plane_x = 0;
		input->ray_casting.plane_y = -0.66;
	}
	else if (input->ray_casting.sprawing_dir == 'S')
	{
		input->ray_casting.plane_x = 0;
		input->ray_casting.plane_y = 0.66;
	}
}
