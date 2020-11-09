/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_textures.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/04 16:09:13 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 21:11:37 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

int	ft_initiate_north_texture(t_input *input)
{
	input->north.img = mlx_png_file_to_image(input->img.mlx,
	input->north_path, &input->north.texture_width,
	&input->north.texture_height);
	if (input->north.img == NULL)
		return (ft_return_error("Error\nPath invalid\n", input));
	input->north.addr = (int *)mlx_get_data_addr(input->north.img,
	&input->north.bits_per_pixel, &input->north.line_length,
	&input->north.endian);
	if (!input->north.addr)
		return (ft_return_error("Error\nMlx img addr failure\n", input));
	return (0);
}

int	ft_initiate_south_texture(t_input *input)
{
	input->south.img = mlx_png_file_to_image(input->img.mlx,
	input->south_path, &input->south.texture_width,
	&input->south.texture_height);
	if (input->south.img == NULL)
		return (ft_return_error("Error\nPath invalid\n", input));
	input->south.addr = (int *)mlx_get_data_addr(input->south.img,
	&input->south.bits_per_pixel, &input->south.line_length,
	&input->south.endian);
	if (!input->south.addr)
		return (ft_return_error("Error\nMlx img addr failure\n", input));
	return (0);
}

int	ft_initiate_west_texture(t_input *input)
{
	input->west.img = mlx_png_file_to_image(input->img.mlx,
	input->west_path, &input->west.texture_width,
	&input->west.texture_height);
	if (input->west.img == NULL)
		return (ft_return_error("Error\nPath invalid\n", input));
	input->west.addr = (int *)mlx_get_data_addr(input->west.img,
	&input->west.bits_per_pixel, &input->west.line_length,
	&input->west.endian);
	if (!input->west.addr)
		return (ft_return_error("Error\nMlx img addr failure\n", input));
	return (0);
}

int	ft_initiate_east_texture(t_input *input)
{
	input->east.img = mlx_png_file_to_image(input->img.mlx,
	input->east_path, &input->east.texture_width,
	&input->east.texture_height);
	if (input->east.img == NULL)
		return (ft_return_error("Error\nPath invalid\n", input));
	input->east.addr = (int *)mlx_get_data_addr(input->east.img,
	&input->east.bits_per_pixel, &input->east.line_length,
	&input->east.endian);
	if (!input->east.addr)
		return (ft_return_error("Error\nMlx img addr failure\n", input));
	return (0);
}
