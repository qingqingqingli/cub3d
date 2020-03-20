/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli            #+#    #+#                */
/*   Updated: 2020/03/11 14:14:26 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static void	ft_reset_input(t_input *input)
{
	input->r_present = 0;
	input->r_xsize = 0;
	input->r_ysize = 0;
	input->north_present = 0;
	input->north_path = "null";
	input->south_present = 0;
	input->south_path = "null";
	input->west_present = 0;
	input->west_path = "null";
	input->east_present = 0;
	input->east_path = "null";
	input->sprite_present = 0;
	input->sprite_path = "null";
	input->floor_present = 0;
	input->floor_r = 0;
	input->floor_g = 0;
	input->floor_b = 0;
	input->ceilling_present = 0;
	input->ceilling_r = 0;
	input->ceilling_g = 0;
	input->ceilling_b = 0;
	input->line = "null";
	input->flood_fill_x = 0;
	input->flood_fill_y = 0;
}

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
	ft_validate_map(&input);
	ft_print_input(input);
	return (0);
}
