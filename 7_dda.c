/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   7_dda.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/06 19:06:55 by qli           #+#    #+#                 */
/*   Updated: 2020/04/09 10:21:35 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/* calculate step & initial side_dis */
/* len of ray from current position to the next x / y side */
/* which direction to step in x / y direction (either +1 or -1)*/
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
		/* jump to next map square in x or y direction */
		if (input->dda.side_dis_x < input->dda.side_dis_y)
		{
			input->dda.side_dis_x = input->dda.side_dis_x + input->dda.delta_dis_x;
			input->dda.map_x = input->dda.map_x + input->dda.step_x;
			input->dda.side = 0;
			// printf("input->dda.map_x is %d\n", input->dda.map_x);
		}
		else
		{
			input->dda.side_dis_y = input->dda.side_dis_y + input->dda.delta_dis_y;
			input->dda.map_y = input->dda.map_y + input->dda.step_y;
			input->dda.side = 1;
			// printf("input->dda.map_y is %d\n", input->dda.map_y);
		}
		/* check if ray has hit a wall */
		if (input->array[input->dda.map_y][input->dda.map_x] == '1')
		{
			hit = 1;
			printf("input->dda.map_x is %d\n", input->dda.map_x);
			printf("input->dda.map_y is %d\n", input->dda.map_y);
		}
	}
	return (0);
}

void 	ft_calculate_ray_len(t_input *input)
{
	if (input->dda.side == 0)
	{
		input->dda.ray_len = (input->dda.map_x + (1 -
		input->dda.step_x) / 2) / ray_dir_x;
	}
	else
	{
		input->dda.ray_len = (input->dda.map_y + (1 -
		input->dda.step_y) / 2) / ray_dir_y;
	}	
}

int 	ft_dda(t_input *input)
{
	ft_map_location(input);
	ft_calculate_delta(input);
	ft_calculate_side_dist(input);
	/* need to read all the calculations again before going to the next step */
	ft_perform_dda(input);
	ft_calculate_ray_len(input);
	return (0);
}