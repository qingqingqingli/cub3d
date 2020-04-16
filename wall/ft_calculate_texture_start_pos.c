/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_texture_start_pos.c                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/16 16:25:46 by qli           #+#    #+#                 */
/*   Updated: 2020/04/16 16:41:30 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_texture_start_pos(t_input *input)
{
	input->wall.texture_start_pos = (input->dda.draw_start -
	input->res_y / 2 + input->dda.line_height / 2)
	* input->wall.texture_step;	
}
