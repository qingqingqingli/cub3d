/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_texture_y.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/16 16:44:30 by qli           #+#    #+#                 */
/*   Updated: 2020/04/16 16:46:09 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_texture_y(t_input *input)
{
	input->wall.texture_y = (int)input->wall.texture_start_pos
	& (input->wall.texture_height - 1);
}
