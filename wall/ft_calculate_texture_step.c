/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_texture_step.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/16 16:17:25 by qli           #+#    #+#                 */
/*   Updated: 2020/04/16 16:21:29 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_texture_step(t_input *input)
{
	input->wall.texture_step = 1.0 * input->wall.texture_height /
	input->dda.line_height;
}