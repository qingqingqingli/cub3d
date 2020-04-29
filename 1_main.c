/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   1_main.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 15:53:14 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int 	ft_input_validate(int argc, char **argv, t_input *input)
{
	if (argc < 2)
		return (ft_return_error("Error\nNo map description\n", input));
	if (argc == 3)
	{
		if (ft_strncmp(argv[2], "--save", 7) == 0)
			input->bmp_needed = 1;
		else
			(ft_return_error("Error\nWrong save argument\n", input));
	}
	if (argc > 3)
		return (ft_return_error("Error\nToo many arguments\n", input));
	return (0);
}

int 	ft_read_file(char **argv, t_input *input)
{
	int		fd;
	char	*line;
	int 	output;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_return_error("Error\nOpen file error\n", input));
	output = get_next_line(fd, &line);
	while (output == 1)
	{
		ft_parse_input(line, input);
		output = get_next_line(fd, &line);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	t_input	input;

	ft_input_validate(argc, argv, &input);
	ft_reset_input(&input);
	ft_read_file(argv, &input);
	input.img.mlx = mlx_init();
	if (input.img.mlx == NULL)
		return (ft_return_error("Error\nInvalid mlx connection\n", &input));
	ft_initiate_window(&input);
	ft_validate_map(&input);
	ft_cast_ray(&input);
	mlx_hook(input.img.mlx_win, DESTROY_NOTIFY, 0, ft_close, &input);
	mlx_hook(input.img.mlx_win, KEY_PRESS, 1L << 0, ft_key_movement, &input);
	mlx_hook(input.img.mlx_win, KEY_RELEASE, 1L << 1, ft_release, &input);
	mlx_loop_hook(input.img.mlx, ft_process_movement, &input);
	mlx_loop(input.img.mlx);
	return (0);
}
