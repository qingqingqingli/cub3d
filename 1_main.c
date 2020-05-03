/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   1_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli           #+#    #+#                 */
/*   Updated: 2020/05/03 17:47:10 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void 	ft_print_remove(t_input *input)
{
	printf("input->res_x is %d\n", input->res_x);
	printf("input->res_y is %d\n", input->res_y);
	printf("input->res_present is %d\n", input->res_present);
	printf("input->north_present is %d\n", input->north_present);
	printf("input->north_path is '%s'\n", input->north_path);
	printf("input->south_present is %d\n", input->south_present);
	printf("input->south_path is '%s'\n", input->south_path);
	printf("input->west_present is %d\n", input->west_present);
	printf("input->west_path is '%s'\n", input->west_path);
	printf("input->east_present is %d\n", input->east_present);
	printf("input->east_path is '%s'\n", input->east_path);
	printf("input->sprite_present is %d\n", input->sprite_present);
	printf("input->sprite_path is '%s'\n", input->sprite_path);
	printf("input->floor_r is %d\n", input->floor_r);
	printf("input->floor_g is %d\n", input->floor_g);
	printf("input->floor_b is %d\n", input->floor_b);
	printf("input->ceilling_r is %d\n", input->ceilling_r);
	printf("input->ceilling_g is %d\n", input->ceilling_g);
	printf("input->ceilling_b is %d\n", input->ceilling_b);
}

int		main(int argc, char **argv)
{
	t_input	input;

	ft_validate_file_input(argc, argv, &input);
	ft_reset_input(&input);
	ft_input_intake(argv, &input);
	// ft_print_2d_array(input.cub_array); //print
	ft_input_parsing(&input);
	input.array = ft_split(input.line, '\n');
	printf("*********************\n");
	ft_print_remove(&input); //print
	printf("*********************\n");
	ft_print_2d_array(input.array); //print
	// ft_validate_map(&input);
	// input.img.mlx = mlx_init();
	// if (input.img.mlx == NULL)
	// 	return (ft_return_error("Error\nInvalid mlx connection\n", &input));
	// ft_initiate_window(&input);
	// ft_cast_ray(&input);
	// mlx_hook(input.img.mlx_win, DESTROY_NOTIFY, 0, ft_close, &input);
	// mlx_hook(input.img.mlx_win, KEY_PRESS, 1L << 0, ft_key_movement, &input);
	// mlx_hook(input.img.mlx_win, KEY_RELEASE, 1L << 1, ft_release, &input);
	// mlx_loop_hook(input.img.mlx, ft_process_movement, &input);
	// mlx_loop(input.img.mlx);
	return (0);
}
