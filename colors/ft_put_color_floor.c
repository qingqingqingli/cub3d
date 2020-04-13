/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_color_floor.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:32:32 by qli           #+#    #+#                 */
/*   Updated: 2020/04/13 14:16:58 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_put_color_floor(t_input *input, int x)
{
	int y;

	// if (input->dda.draw_end > 0)
		y = input->dda.draw_end;
	while (y <= input->res_y)
	{
		my_mlx_pixel_put(&input->img, x, y, DARK_PINK);
		y++;
	}
}
