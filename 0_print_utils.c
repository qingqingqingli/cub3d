/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   0_print_utils.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 16:21:21 by qli           #+#    #+#                 */
/*   Updated: 2020/04/07 12:05:01 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void 	ft_print_2d_array(t_input *input)
{
	int i;

	i = 0;
	while (input->array[i])
	{
		printf("%s\n", input->array[i]);
		i++;
	}
}

void	ft_print_input(t_input input)
{
	printf("*********************************\n");
	printf("r_present is %d\n", input.r_present);
	printf("input.xsize is %d\n", input.r_xsize);
	printf("input.ysize is %d\n", input.r_ysize);
	printf("input.north_present is %d\n", input.north_present);
	printf("input.north_path is %s\n", input.north_path);
	printf("input.south_present is %d\n", input.south_present);
	printf("input.south_path is %s\n", input.south_path);
	printf("input.west_present is %d\n", input.west_present);
	printf("input.west_path is %s\n", input.west_path);
	printf("input.east_present is %d\n", input.east_present);
	printf("input.east_path is %s\n", input.east_path);
	printf("input.sprite_present is %d\n", input.sprite_present);
	printf("input.sprite_path is %s\n", input.sprite_path);
	printf("input.floor_present is %d\n", input.floor_present);
	printf("input.floor_r is %d\n", input.floor_r);
	printf("input.floor_g is %d\n", input.floor_g);
	printf("input.floor_b is %d\n", input.floor_b);
	printf("input.ceilling_present is %d\n", input.ceilling_present);
	printf("input.ceilling_r is %d\n", input.ceilling_r);
	printf("input.ceilling_g is %d\n", input.ceilling_g);
	printf("input.ceilling_b is %d\n", input.ceilling_b);
	printf("*********************************\n");
	printf("input.ray_casting.pos_x is %f\n", input.ray_casting.pos_x);
	printf("input.ray_casting.pos_y is %f\n", input.ray_casting.pos_y);
	printf("input.ray_casting.sprawing_dir is %c\n", input.ray_casting.sprawing_dir);
	printf("input.ray_casting.dir_x is %f\n", input.ray_casting.dir_x);
	printf("input.ray_casting.dir_y is %f\n", input.ray_casting.dir_y);	
	printf("input.ray_casting.plane_x is %f\n", input.ray_casting.plane_x);
	printf("input.ray_casting.plane_y is %f\n", input.ray_casting.plane_y);
	printf("input.ray_casting.ray_direction_x is %f\n", input.ray_casting.ray_direction_x);
	printf("input.ray_casting.ray_direction_y is %f\n", input.ray_casting.ray_direction_y);
	printf("input.ray_casting.camera_x is %f\n", input.ray_casting.camera_x);
	printf("input.ray_casting.current_time is %f\n", input.ray_casting.current_time);
	printf("input.ray_casting.old_time is %f\n", input.ray_casting.old_time);
	// printf("%s\n", input.line);
	printf("*********************************\n");
	printf("input.dda.map_x is %d\n", input.dda.map_x);
	printf("input.dda.map_y is %d\n", input.dda.map_y);
	printf("input->dda.side_dis_x is %f\n", input.dda.side_dis_x);
	printf("input->dda.side_dis_y is %f\n", input.dda.side_dis_y);
	printf("input.dda.delta_dis_x is %f\n", input.dda.delta_dis_x);
	printf("input.dda.delta_dis_y is %f\n", input.dda.delta_dis_y);
	printf("step_x is %d\n", input.dda.step_x);
	printf("step_y is %d\n", input.dda.step_y);

	printf("*********************************\n");
	ft_print_2d_array(&input);
}
