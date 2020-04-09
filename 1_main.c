/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   1_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli           #+#    #+#                 */
/*   Updated: 2020/04/09 17:43:27 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		main(int argc, char **argv)
{
	int		fd;
	char 	*line;
	int		output;
	t_input	input;
	void	*mlx;
	void	*mlx_win;

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
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 250, 250, "Hello world!");
	input.img.img = mlx_new_image(mlx, 250, 250);
	input.img.addr = mlx_get_data_addr(input.img.img, &input.img.bits_per_pixel,
	&input.img.line_length, &input.img.endian);
	ft_validate_map(&input);
	ft_cast_ray(&input);
	ft_print_input(input);
	// my_mlx_pixel_put(&input.img, 5, 5, RED);
	// my_mlx_pixel_put(&input.img, 15, 15, RED);
	// my_mlx_pixel_put(&input.img, 25, 25, RED);
	// my_mlx_pixel_put(&input.img, 35, 35, RED);
	mlx_put_image_to_window(mlx, mlx_win, input.img.img, 0, 0);
	mlx_loop(mlx);
	return (0);
}
