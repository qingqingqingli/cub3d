/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_utils.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 16:21:21 by qli           #+#    #+#                 */
/*   Updated: 2020/04/16 16:09:48 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

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
	printf("input.res_present is %d\n", input.res_present);
	printf("input.res_x is %d\n", input.res_x);
	printf("input.res_y is %d\n", input.res_y);
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
	printf("*********************************\n");
	printf("input.dda.map_x is %d\n", input.dda.map_x);
	printf("input.dda.map_y is %d\n", input.dda.map_y);
	printf("input.dda.side_dis_x is %f\n", input.dda.side_dis_x);
	printf("input.dda.side_dis_y is %f\n", input.dda.side_dis_y);
	printf("input.dda.delta_dis_x is %f\n", input.dda.delta_dis_x);
	printf("input.dda.delta_dis_y is %f\n", input.dda.delta_dis_y);
	printf("input.dda.step_x is %d\n", input.dda.step_x);
	printf("input.dda.step_y is %d\n", input.dda.step_y);
	printf("input.dda.side is %d\n", input.dda.side);
	printf("input.dda.ray_len is %f\n", input.dda.ray_len);
	printf("input.dda.line_height is %d\n", input.dda.line_height);
	printf("input.dda.draw_start is %d\n", input.dda.draw_start);
	printf("input.dda.draw_end is %d\n", input.dda.draw_end);
	printf("*********************************\n");
	printf("input.color.red is %d\n", input.color.red);
	printf("input.color.green is %d\n", input.color.green);
	printf("input.color.blue is %d\n", input.color.blue);
	printf("input.color.wall is %d\n", input.color.wall);
	printf("input.color.ceilling is %d\n", input.color.ceilling);
	printf("input.color.floor is %d\n", input.color.floor);
	printf("input.color.reserve is %d\n", input.color.reserve);
	printf("*********************************\n");
	printf("input.wall.texture_height is %d\n", input.wall.texture_height);
	printf("input.wall.texture_width is %d\n", input.wall.texture_width);
	printf("input.wall.texture_number is %d\n", input.wall.texture_number);
	printf("input.wall.texture_wall_x is %f\n", input.wall.texture_wall_x);
	printf("input.wall.texture_x is %d\n", input.wall.texture_x);
	printf("input.wall.texture_step is %f\n", input.wall.texture_step);
	printf("input.wall.texture_start_pos is %f\n", input.wall.texture_start_pos);
	printf("input.wall.texture_y is %d\n", input.wall.texture_y);
	ft_print_2d_array(&input);
}
