/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   1_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli           #+#    #+#                 */
/*   Updated: 2020/04/21 14:43:55 by qli           ########   odam.nl         */
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
	if (input.img.mlx == NULL)
		return (ft_return_error("Invalid mlx connection\n"));
	ft_initiate_window(&input);
	ft_validate_map(&input);
	ft_cast_ray(&input);
	// ft_print_input(input);
	mlx_hook(input.img.mlx_win, KEY_PRESS, 1L<<0, *ft_key_movement, &input);
	mlx_hook(input.img.mlx_win, KEY_RELEASE, 1L<<1, *ft_release, &input);
	mlx_loop_hook(input.img.mlx, *ft_process_movement, &input);
	mlx_loop(input.img.mlx);
	return (0);
}
