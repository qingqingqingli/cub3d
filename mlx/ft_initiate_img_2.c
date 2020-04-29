/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_img_2.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 14:20:43 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 16:39:54 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_initiate_img_2(t_input *input)
{
	input->img_2.img = mlx_new_image(input->img.mlx,
	input->res_x, input->res_y);
	input->img_2.addr = mlx_get_data_addr(input->img_2.img,
	&input->img_2.bits_per_pixel, &input->img_2.line_length,
	&input->img_2.endian);
}
