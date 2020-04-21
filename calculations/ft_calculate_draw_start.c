/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_draw_start.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:17:38 by qli           #+#    #+#                 */
/*   Updated: 2020/04/10 14:18:27 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_draw_start(t_input *input)
{
	input->dda.draw_start = -input->dda.line_height / 2 +
	input->res_y / 2;
	if (input->dda.draw_start < 0)
		input->dda.draw_start = 0;
}