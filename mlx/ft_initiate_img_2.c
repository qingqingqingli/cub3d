/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_img_2.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 14:20:43 by qli           #+#    #+#                 */
/*   Updated: 2020/04/30 10:41:13 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_initiate_img_2(t_input *input)
{
	input->img_2.img = mlx_new_image(input->img.mlx,
	input->res_x, input->res_y);
	if (input->img_2.img == NULL)
		return (ft_return_error("Error\nMlx img failure\n", input));
	input->img_2.addr = mlx_get_data_addr(input->img_2.img,
	&input->img_2.bits_per_pixel, &input->img_2.line_length,
	&input->img_2.endian);
	if (input->img_2.addr == NULL)
		return (ft_return_error("Error\nMlx img addr failure\n", input));
	return (0);
}
