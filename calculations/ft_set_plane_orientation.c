/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_set_plane_orientation.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:24:15 by qli           #+#    #+#                 */
/*   Updated: 2020/04/15 14:36:38 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void	ft_set_plane_orientation(t_input *input)
{
	if (direction == 'N')
	{
		plane_dir_x = 0.66;
		plane_dir_y = 0;
	}
	else if (direction == 'S')
	{
		plane_dir_x = -0.66;
		plane_dir_y = 0;
	}
	else if (direction == 'W')
	{
		plane_dir_x = 0;
		plane_dir_y = -0.66;
	}
	else if (direction == 'E')
	{
		plane_dir_x = 0;
		plane_dir_y = 0.66;
	}
}