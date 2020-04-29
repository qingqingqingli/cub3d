/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_window.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 14:40:03 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 10:57:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void 	ft_initiate_window(t_input *input)
{
	input->img.mlx_win = mlx_new_window(input->img.mlx, input->res_x, input->res_y, "cub3d");
	input->img.img = mlx_new_image(input->img.mlx, input->res_x, input->res_y);
	input->img.addr = mlx_get_data_addr(input->img.img, &input->img.bits_per_pixel,
	&input->img.line_length, &input->img.endian);
	input->wall.img_active = 1;
}
