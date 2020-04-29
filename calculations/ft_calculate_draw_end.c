/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_draw_end.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:18:48 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 10:57:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void 	ft_calculate_draw_end(t_input *input)
{
	input->dda.draw_end = input->dda.line_height / 2 +
	input->res_y / 2;
	if (input->dda.draw_end >= input->res_y)
		input->dda.draw_end = input->res_y - 1;
}
