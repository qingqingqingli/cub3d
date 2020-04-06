/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   5_initiate_ray_casting.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/06 13:29:12 by qli           #+#    #+#                 */
/*   Updated: 2020/04/06 17:13:05 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/* initiate the variables for the next step */

/* pos_x, pos_y, dir_x, dir_y, plane_x, plane_y, fov */

/* screen_width, screen_height, map_width, map_height
** -> not sure how these will be used*/ 

/* after all the initial calculations, will make the calculation
** to cast the first ray */

int 	ft_set_player_position(t_input *input)
{
	position_x = 0;
	position_y = 0;
	while(input->array[position_y][position_x])
	{
		while (input->array[position_y][position_x] != '\0')
		{
			if (ft_check_sprawning_pos(input->array[position_y][position_x], input) == 1)
				return (0);
			position_x++;
		}
		position_x = 0;
		position_y++;
	}
	return (0);
}

void 	ft_set_player_orientation(t_input *input)
{
	if (direction == 'N')
	{
		direction_x = 0;
		direction_y = 1;
	}
	else if (direction == 'S')
	{
		direction_x = 0;
		direction_y = -1;
	}
	else if (direction == 'W')
	{
		direction_x = -1;
		direction_y = 0;
	}
	else if (direction == 'E')
	{
		direction_x = 1;
		direction_y = 0;
	}
}

void	ft_set_plane_orientation(t_input *input)
{
	if (direction == 'N')
	{
		plane_dir_x = 0.66;
		plane_dir_y = 0;
	}
	else if (direction == 'S')
	{
		plane_dir_x = -0.66;
		plane_dir_y = 0;
	}
	else if (direction == 'W')
	{
		plane_dir_x = 0;
		plane_dir_y = -0.66;
	}
	else if (direction == 'E')
	{
		plane_dir_x = 0;
		plane_dir_y = 0.66;
	}
}

void	ft_initiate_variables(t_input *input)
{
	ft_set_player_position(input);
	ft_set_player_orientation(input);
	ft_set_plane_orientation(input);
	printf("direction_x is %f\n", direction_x);
	printf("direction_y is %f\n", direction_y);
	printf("plane_dir_x is %f\n", plane_dir_x);
	printf("plane_dir_y is %f\n", plane_dir_y);
}

int 	ft_cast_ray(t_input *input)
{
	ft_initiate_variables(input);
	ft_calculate_ray(input);
	return (0);
}
