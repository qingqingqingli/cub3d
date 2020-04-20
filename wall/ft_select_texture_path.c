/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_select_texture_path.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/20 17:56:56 by qli           #+#    #+#                 */
/*   Updated: 2020/04/20 18:03:16 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

/*
** 1 = South
** 2 = North
** 3 = East
** 4 = West
*/

void ft_select_texture_path(t_input *input)
{
	if (input->dda.side == 1 && ray_dir_y > 0)
		input->wall.texture_number = 1;
	if (input->dda.side == 1 && ray_dir_y < 0)
		input->wall.texture_number = 2;
	if (input->dda.side == 0 && ray_dir_x > 0)
		input->wall.texture_number = 3;
	if (input->dda.side == 0 && ray_dir_x < 0)
		input->wall.texture_number = 4;	
}