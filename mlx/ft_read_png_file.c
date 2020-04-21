/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_png_file.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/17 10:53:35 by qli           #+#    #+#                 */
/*   Updated: 2020/04/21 08:13:10 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

/*
** 1 = South --> East
** 2 = North --> West
** 3 = East --> South
** 4 = West --> North
*/

int 	ft_read_png_file(t_input *input)
{
	if (input->wall.texture_number == 1) // east
	{
		input->east.img = mlx_png_file_to_image(input->img.mlx, input->east_path,
		&input->east.texture_width, &input->east.texture_height);
		if (input->east.img == NULL)
			return (ft_return_error("Invalid route\n"));
		input->east.addr = (int *)mlx_get_data_addr(input->east.img, &input->east.bits_per_pixel,
		&input->east.line_length, &input->east.endian);
	}
	else if (input->wall.texture_number == 2) // west
	{
		input->west.img = mlx_png_file_to_image(input->img.mlx, input->west_path,
		&input->west.texture_width, &input->west.texture_height);
		if (input->west.img == NULL)
			return (ft_return_error("Invalid route\n"));
		input->west.addr = (int *)mlx_get_data_addr(input->west.img, &input->west.bits_per_pixel,
		&input->west.line_length, &input->west.endian);
	}
	else if (input->wall.texture_number == 3) // south
	{
		input->south.img = mlx_png_file_to_image(input->img.mlx, input->south_path,
		&input->south.texture_width, &input->south.texture_height);
		if (input->south.img == NULL)
			return (ft_return_error("Invalid route\n"));
		input->south.addr = (int *)mlx_get_data_addr(input->south.img, &input->south.bits_per_pixel,
		&input->south.line_length, &input->south.endian);
	}
	else if (input->wall.texture_number == 4) // north
	{
		input->north.img = mlx_png_file_to_image(input->img.mlx, input->north_path,
		&input->north.texture_width, &input->north.texture_height);
		if (input->north.img == NULL)
			return (ft_return_error("Invalid route\n"));
		input->north.addr = (int *)mlx_get_data_addr(input->north.img, &input->north.bits_per_pixel,
		&input->north.line_length, &input->north.endian);
	}
	return (0);
}
