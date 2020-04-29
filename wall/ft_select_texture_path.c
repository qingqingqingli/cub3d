/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_select_texture_path.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/20 17:56:56 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:30:53 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

/*
** 1 = East -> South
** 2 = West -> North
** 3 = South -> East -> West
** 4 = North -> West -> East
*/

void	ft_select_texture_path(t_input *input)
{
	if (input->dda.side == 0 && input->ray_casting.ray_direction_x > 0)
		input->wall.texture_number = 1;
	else if (input->dda.side == 0 && input->ray_casting.ray_direction_x < 0)
		input->wall.texture_number = 2;
	else if (input->dda.side == 1 && input->ray_casting.ray_direction_y > 0)
		input->wall.texture_number = 3;
	else if (input->dda.side == 1 && input->ray_casting.ray_direction_y < 0)
		input->wall.texture_number = 4;
}
