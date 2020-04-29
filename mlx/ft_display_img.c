/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_display_img.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 14:36:09 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 10:57:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void 	ft_display_img(t_input *input)
{
	if (input->wall.img_active == 1)
	{
		mlx_put_image_to_window(input->img.mlx, input->img.mlx_win,
		input->img.img, 0, 0);
		input->wall.img_active = 2;
	}
	else if (input->wall.img_active == 2)
	{
		mlx_put_image_to_window(input->img.mlx, input->img.mlx_win,
		input->img_2.img, 0, 0);
		input->wall.img_active = 1;
	}
}
