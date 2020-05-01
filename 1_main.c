/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   1_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli           #+#    #+#                 */
/*   Updated: 2020/05/01 10:01:02 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		main(int argc, char **argv)
{
	t_input	input;

	ft_validate_input(argc, argv, &input); //validate argv
	printf("2\n");
	ft_reset_input(&input); //reset all values
	printf("3\n");
	ft_process_input_file(argv, &input); //process input file
	printf("4\n");
	ft_validate_map(&input);
	printf("5\n");
	input.img.mlx = mlx_init();
	if (input.img.mlx == NULL)
		return (ft_return_error("Error\nInvalid mlx connection\n", &input));
	ft_initiate_window(&input);
	printf("6\n");
	ft_cast_ray(&input);
	printf("7\n");
	mlx_hook(input.img.mlx_win, DESTROY_NOTIFY, 0, ft_close, &input);
	mlx_hook(input.img.mlx_win, KEY_PRESS, 1L << 0, ft_key_movement, &input);
	mlx_hook(input.img.mlx_win, KEY_RELEASE, 1L << 1, ft_release, &input);
	mlx_loop_hook(input.img.mlx, ft_process_movement, &input);
	mlx_loop(input.img.mlx);
	return (0);
}
