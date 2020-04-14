/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   1_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli           #+#    #+#                 */
/*   Updated: 2020/04/14 18:17:44 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		main(int argc, char **argv)
{
	int		fd;
	char 	*line;
	int		output;
	t_input	input;

	if (argc < 2)
		return (ft_return_error("No map description\n"));
	if (argc > 2)
		return (ft_return_error("Too many arguments\n"));
	ft_reset_input(&input);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_return_error("Open file error\n"));
	output = get_next_line(fd, &line);
	while (output == 1)
	{
		ft_parse_input(line, &input);
		output = get_next_line(fd, &line);
	}
	input.img.mlx = mlx_init();
	input.img.mlx_win = mlx_new_window(input.img.mlx, input.res_x, input.res_y, "Hello world!");
	input.img.img = mlx_new_image(input.img.mlx, input.res_x, input.res_y);
	input.img.addr = mlx_get_data_addr(input.img.img, &input.img.bits_per_pixel,
	&input.img.line_length, &input.img.endian);
	ft_validate_map(&input);
	ft_cast_ray(&input);
	ft_print_input(input);
	ft_movement(&input);
	mlx_loop(input.img.mlx);
	return (0);
}
