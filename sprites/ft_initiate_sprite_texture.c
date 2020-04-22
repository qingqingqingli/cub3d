/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_sprite_texture.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 20:06:35 by qli           #+#    #+#                 */
/*   Updated: 2020/04/22 10:28:21 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int	ft_initiate_sprite_texture(t_input *input)
{
	input->sprite.img = mlx_png_file_to_image(input->img.mlx, input->sprite_path,
		&input->sprite.texture_width, &input->sprite.texture_height);
	if (input->sprite.img == NULL)
		return (ft_return_error("Invalid route\n", input));
	input->sprite.addr = (int *)mlx_get_data_addr(input->sprite.img, &input->sprite.bits_per_pixel,
	&input->sprite.line_length, &input->sprite.endian);
	return (0);
}
