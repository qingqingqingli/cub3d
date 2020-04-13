/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_side_dist.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:13:33 by qli           #+#    #+#                 */
/*   Updated: 2020/04/13 14:59:02 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

/* calculate step & initial side_dis */
void 	ft_calculate_side_dist(t_input *input)
{
	if (input->dda.step_x == -1)
		input->dda.side_dis_x = (position_x - input->dda.map_x) *
		input->dda.delta_dis_x;
	else
		input->dda.side_dis_x = (input->dda.map_x + 1 - position_x) *
		input->dda.delta_dis_x;
	if (input->dda.step_y == -1)
		input->dda.side_dis_y = (position_y - input->dda.map_y) *
		input->dda.delta_dis_y;
	else
		input->dda.side_dis_y = (input->dda.map_y + 1 - position_y) *
		input->dda.delta_dis_y;
}
