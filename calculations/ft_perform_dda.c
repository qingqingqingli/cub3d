/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_perform_dda.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:20:44 by qli           #+#    #+#                 */
/*   Updated: 2020/04/27 11:03:35 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

/* perform dda in a loop until it hits a wall */
void 	ft_perform_dda(t_input *input)
{
	int hit;

	hit = 0;
	while (hit == 0)
	{
		if (input->dda.side_dis_x < input->dda.side_dis_y)
		{
			input->dda.side_dis_x += input->dda.delta_dis_x;
			input->dda.map_x = input->dda.map_x + input->dda.step_x;
			input->dda.side = 0;
		}
		else
		{
			input->dda.side_dis_y += input->dda.delta_dis_y;
			input->dda.map_y = input->dda.map_y + input->dda.step_y;
			input->dda.side = 1;
		}
		if (input->array[input->dda.map_y][input->dda.map_x] == '1')
			hit = 1;
	}
}
