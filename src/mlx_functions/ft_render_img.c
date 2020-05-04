/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_render_img.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 14:24:06 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_render_img(t_input *input, int x, int y, int color)
{
	if (input->wall.img_active == 1)
	{
		my_mlx_pixel_put(&input->img, x, y, color);
	}
	else if (input->wall.img_active == 2)
	{
		my_mlx_pixel_put(&input->img_2, x, y, color);
	}
}
