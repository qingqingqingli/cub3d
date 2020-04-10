/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_set_player_orientation.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:22:54 by qli           #+#    #+#                 */
/*   Updated: 2020/04/10 14:23:39 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_set_player_orientation(t_input *input)
{
	if (direction == 'N')
	{
		direction_x = 0;
		direction_y = -1;
	}
	else if (direction == 'S')
	{
		direction_x = 0;
		direction_y = 1;
	}
	else if (direction == 'W')
	{
		direction_x = -1;
		direction_y = 0;
	}
	else if (direction == 'E')
	{
		direction_x = 1;
		direction_y = 0;
	}
}
