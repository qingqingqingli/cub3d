/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_window.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/15 14:40:03 by qli           #+#    #+#                 */
/*   Updated: 2020/04/30 19:17:08 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	ft_initiate_window(t_input *input)
{
	input->img.mlx_win = mlx_new_window(input->img.mlx,
	input->res_x, input->res_y, "cub3d");
	if (input->img.mlx_win == NULL)
		return (ft_return_error("Error\nMlx Window failure\n", input));
	input->img.img = mlx_new_image(input->img.mlx, input->res_x, input->res_y);
	if (input->img.img == NULL)
		return (ft_return_error("Error\nMlx img failure\n", input));
	input->img.addr = mlx_get_data_addr(input->img.img,
	&input->img.bits_per_pixel, &input->img.line_length, &input->img.endian);
	if (input->img.addr == NULL)
		return (ft_return_error("Error\nMlx img addr failure\n", input));
	input->wall.img_active = 1;
	return (0);
}
