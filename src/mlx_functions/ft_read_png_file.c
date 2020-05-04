/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_png_file.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/17 10:53:35 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

int		ft_read_east(t_input *input)
{
	input->east.img = mlx_png_file_to_image(input->img.mlx, input->east_path,
	&input->east.texture_width, &input->east.texture_height);
	if (input->east.img == NULL)
		return (ft_return_error("Error\nMlx img failure\n", input));
	input->east.addr = (int *)mlx_get_data_addr(input->east.img,
	&input->east.bits_per_pixel, &input->east.line_length, &input->east.endian);
	if (input->east.addr == NULL)
		return (ft_return_error("Error\nMlx img addr failure\n", input));
	input->wall.texture_width = input->east.texture_width;
	input->wall.texture_height = input->east.texture_height;
	return (0);
}

int		ft_read_west(t_input *input)
{
	input->west.img = mlx_png_file_to_image(input->img.mlx, input->west_path,
	&input->west.texture_width, &input->west.texture_height);
	if (input->west.img == NULL)
		return (ft_return_error("Error\nMlx img failure\n", input));
	input->west.addr = (int *)mlx_get_data_addr(input->west.img,
	&input->west.bits_per_pixel, &input->west.line_length, &input->west.endian);
	if (input->west.addr == NULL)
		return (ft_return_error("Error\nMlx img addr failure\n", input));
	input->wall.texture_width = input->west.texture_width;
	input->wall.texture_height = input->west.texture_height;
	return (0);
}

int		ft_read_south(t_input *input)
{
	input->south.img = mlx_png_file_to_image(input->img.mlx, input->south_path,
	&input->south.texture_width, &input->south.texture_height);
	if (input->south.img == NULL)
		return (ft_return_error("Error\nMlx img failure\n", input));
	input->south.addr = (int *)mlx_get_data_addr(input->south.img,
	&input->south.bits_per_pixel, &input->south.line_length,
	&input->south.endian);
	if (input->south.addr == NULL)
		return (ft_return_error("Error\nMlx img addr failure\n", input));
	input->wall.texture_width = input->south.texture_width;
	input->wall.texture_height = input->south.texture_height;
	return (0);
}

int		ft_read_north(t_input *input)
{
	input->north.img = mlx_png_file_to_image(input->img.mlx, input->north_path,
	&input->north.texture_width, &input->north.texture_height);
	if (input->north.img == NULL)
		return (ft_return_error("Error\nMlx img failure\n", input));
	input->north.addr = (int *)mlx_get_data_addr(input->north.img,
	&input->north.bits_per_pixel, &input->north.line_length,
	&input->north.endian);
	if (input->north.addr == NULL)
		return (ft_return_error("Error\nMlx img addr failure\n", input));
	input->wall.texture_width = input->north.texture_width;
	input->wall.texture_height = input->north.texture_height;
	return (0);
}

int		ft_read_png_file(t_input *input)
{
	if (input->wall.texture_number == 1)
		ft_read_east(input);
	else if (input->wall.texture_number == 2)
		ft_read_west(input);
	else if (input->wall.texture_number == 3)
		ft_read_south(input);
	else if (input->wall.texture_number == 4)
		ft_read_north(input);
	return (0);
}
