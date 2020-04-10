/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   7_dda.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/06 19:06:55 by qli           #+#    #+#                 */
/*   Updated: 2020/04/10 14:00:31 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/* calculate step & initial side_dis */
void 	ft_calculate_side_dist(t_input *input)
{
	if (ray_dir_x < 0)
	{
		input->dda.step_x = -1;
		input->dda.side_dis_x = (position_x - input->dda.map_x) *
		input->dda.delta_dis_x;
	}
	else
	{
		input->dda.step_x = 1;
		input->dda.side_dis_x = (input->dda.map_x + 1.0 - position_x) *
		input->dda.delta_dis_x;
	}
	if (ray_dir_y < 0)
	{
		input->dda.step_y = -1;
		input->dda.side_dis_y = (position_y - input->dda.map_y) *
		input->dda.delta_dis_y;
	}
	else
	{
		input->dda.step_y = 1;
		input->dda.side_dis_y = (input->dda.map_y + 1.0 - position_y) *
		input->dda.delta_dis_y;
	}	
}

/* len of ray from one x / y side to next x / y side */
void 	ft_calculate_delta(t_input *input)
{
	input->dda.delta_dis_x = fabs(1 / ray_dir_x);
	input->dda.delta_dis_y = fabs(1 / ray_dir_y);
}

/* in which box of the map we are in */
void 	ft_map_location(t_input *input)
{
	input->dda.map_x = (int)position_x;
	input->dda.map_y = (int)position_y;
}

/* perform dda in a loop until it hits a wall */
int 	ft_perform_dda(t_input *input)
{
	int hit;

	hit = 0;
	while (hit == 0)
	{
		if (input->dda.side_dis_x < input->dda.side_dis_y)
		{
			input->dda.side_dis_x = input->dda.side_dis_x + input->dda.delta_dis_x;
			input->dda.map_x = input->dda.map_x + input->dda.step_x;
			input->dda.side = 0;
		}
		else
		{
			input->dda.side_dis_y = input->dda.side_dis_y + input->dda.delta_dis_y;
			input->dda.map_y = input->dda.map_y + input->dda.step_y;
			input->dda.side = 1;
		}
		if (input->array[input->dda.map_y][input->dda.map_x] == '1')
			hit = 1;
	}
	return (0);
}

int 	ft_dda(t_input *input)
{
	ft_map_location(input);
	ft_calculate_delta(input);
	ft_calculate_side_dist(input);
	ft_perform_dda(input);
	return (0);
}