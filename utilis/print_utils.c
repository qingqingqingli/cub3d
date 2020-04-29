/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_utils.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 16:21:21 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 15:08:31 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void 	ft_print_2d_array(char **array)
{
	int i;

	i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
}

void	ft_print_input(t_input input)
{
	// printf("*********************************\n");
	// printf("input.res_present is %d\n", input.res_present);
	// printf("input.res_x is %d\n", input.res_x);
	// printf("input.res_y is %d\n", input.res_y);
	// printf("input.north_present is %d\n", input.north_present);
	// printf("input.north_path is %s\n", input.north_path);
	// printf("input.south_present is %d\n", input.south_present);
	// printf("input.south_path is %s\n", input.south_path);
	// printf("input.west_present is %d\n", input.west_present);
	// printf("input.west_path is %s\n", input.west_path);
	// printf("input.east_present is %d\n", input.east_present);
	// printf("input.east_path is %s\n", input.east_path);
	// printf("input.sprite_present is %d\n", input.sprite_present);
	// printf("input.sprite_path is %s\n", input.sprite_path);
	// printf("input.floor_present is %d\n", input.floor_present);
	// printf("input.floor_r is %d\n", input.floor_r);
	// printf("input.floor_g is %d\n", input.floor_g);
	// printf("input.floor_b is %d\n", input.floor_b);
	// printf("input.ceilling_present is %d\n", input.ceilling_present);
	// printf("input.ceilling_r is %d\n", input.ceilling_r);
	// printf("input.ceilling_g is %d\n", input.ceilling_g);
	// printf("input.ceilling_b is %d\n", input.ceilling_b);
	// printf("input.ceilling_color is %d\n", input.ceilling_color);
	// printf("input.floor_color is %d\n", input.floor_color);
	// printf("*********************************\n");
	// printf("input.ray_casting.pos_x is %f\n", input.ray_casting.pos_x);
	// printf("input.ray_casting.pos_y is %f\n", input.ray_casting.pos_y);
	// printf("input.ray_casting.sprawing_dir is %c\n", input.ray_casting.sprawing_dir);
	// printf("input.ray_casting.dir_x is %f\n", input.ray_casting.dir_x);
	// printf("input.ray_casting.dir_y is %f\n", input.ray_casting.dir_y);	
	// printf("input.ray_casting.plane_x is %f\n", input.ray_casting.plane_x);
	// printf("input.ray_casting.plane_y is %f\n", input.ray_casting.plane_y);
	// printf("input.ray_casting.ray_direction_x is %f\n", input.ray_casting.ray_direction_x);
	// printf("input.ray_casting.ray_direction_y is %f\n", input.ray_casting.ray_direction_y);
	// printf("input.ray_casting.camera_x is %f\n", input.ray_casting.camera_x);
	// printf("*********************************\n");
	// printf("input.dda.map_x is %d\n", input.dda.map_x);
	// printf("input.dda.map_y is %d\n", input.dda.map_y);
	// printf("input.dda.side_dis_x is %f\n", input.dda.side_dis_x);
	// printf("input.dda.side_dis_y is %f\n", input.dda.side_dis_y);
	// printf("input.dda.delta_dis_x is %f\n", input.dda.delta_dis_x);
	// printf("input.dda.delta_dis_y is %f\n", input.dda.delta_dis_y);
	// printf("input.dda.step_x is %d\n", input.dda.step_x);
	// printf("input.dda.step_y is %d\n", input.dda.step_y);
	// printf("input.dda.side is %d\n", input.dda.side);
	// printf("input.dda.ray_len is %f\n", input.dda.ray_len);
	// printf("input.dda.line_height is %d\n", input.dda.line_height);
	// printf("input.dda.draw_start is %d\n", input.dda.draw_start);
	// printf("input.dda.draw_end is %d\n", input.dda.draw_end);
	// printf("*********************************\n");
	// printf("input.color.r is %d\n", input.color.r);
	// printf("input.color.g is %d\n", input.color.g);
	// printf("input.color.b is %d\n", input.color.b);
	// printf("input.color.wall is %d\n", input.color.wall);
	// printf("input.color.ceilling is %d\n", input.color.ceilling);
	// printf("input.color.floor is %d\n", input.color.floor);
	// printf("input.color.reserve is %d\n", input.color.reserve);
	// printf("*********************************\n");
	// printf("input.wall.texture_height is %d\n", input.wall.texture_height);
	// printf("input.wall.texture_width is %d\n", input.wall.texture_width);
	// printf("input.wall.texture_number is %d\n", input.wall.texture_number);
	// printf("input.wall.texture_wall_x is %f\n", input.wall.texture_wall_x);
	// printf("input.wall.texture_x is %d\n", input.wall.texture_x);
	// printf("input.wall.texture_step is %f\n", input.wall.texture_step);
	// printf("input.wall.texture_start_pos is %f\n", input.wall.texture_start_pos);
	// printf("input.wall.texture_y is %d\n", input.wall.texture_y);
	// printf("input.wall.wall_color is %d\n", input.wall.wall_color);
	// printf("input.wall.line_length is %d\n", input.wall.line_length);
	// printf("input.wall.img_active is %d\n", input.wall.img_active);
	// printf("*********************************\n");
	// printf("input.north.texture_width is %d\n", input.north.texture_width);
	// printf("input.north.texture_height is %d\n", input.north.texture_height);
	// printf("input.south.texture_width is %d\n", input.south.texture_width);
	// printf("input.south.texture_height is %d\n", input.south.texture_height);
	// printf("input.west.texture_width is %d\n", input.west.texture_width);
	// printf("input.west.texture_height is %d\n", input.west.texture_height);
	// printf("input.east.texture_width is %d\n", input.east.texture_width);
	// printf("input.east.texture_height is %d\n", input.east.texture_height);
	// printf("input.sprite.texture_width is %d\n", input.sprite.texture_width);
	// printf("input.sprite.texture_height is %d\n", input.sprite.texture_height);
	printf("*************original array********************\n");
	ft_print_2d_array(input.array);
	// printf("*************copy array********************\n");
	// ft_print_2d_array(input.array_copy);

	// printf("input.sprite_data.sprite_x is %f\n", input.sprite_data.sprite_x);
	// printf("input.sprite_data.sprite_y is %f\n", input.sprite_data.sprite_y);
	// printf("input.sprite_data.inverse_camera is %f\n", input.sprite_data.inverse_camera);
	// printf("input.sprite_data.transform_x is %f\n", input.sprite_data.transform_x);
	// printf("input.sprite_data.transform_y is %f\n", input.sprite_data.transform_y);
	// printf("input.sprite_data.sprite_screen_x is %d\n", input.sprite_data.sprite_screen_x);
	// printf("input.sprite_data.sprite_height is %d\n", input.sprite_data.sprite_height);
	// printf("input.sprite_data.sprite_width is %d\n", input.sprite_data.sprite_width);
	// printf("input.sprite_data.draw_start_x is %d\n", input.sprite_data.draw_start_x);
	// printf("input.sprite_data.draw_end_x is %d\n", input.sprite_data.draw_end_x);
	// printf("input.sprite_data.draw_start_y is %d\n", input.sprite_data.draw_start_y);
	// printf("input.sprite_data.draw_end_y is %d\n", input.sprite_data.draw_end_y);
	// printf("input.sprite.texture_width is %d\n", input.sprite.texture_width);
	// printf("input.sprite.texture_height is %d\n", input.sprite.texture_height);
	// printf("input.sprite_data.sprite_color is %d\n", input.sprite_data.sprite_color);
	// printf("input.sprite_data.texture_x is %d\n", input.sprite_data.texture_x);
	// printf("input.sprite_data.texture_y is %d\n", input.sprite_data.texture_y);

}
