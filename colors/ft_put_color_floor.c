/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_color_floor.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:32:32 by qli           #+#    #+#                 */
/*   Updated: 2020/04/15 16:27:08 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_put_color_floor(t_input *input, int x)
{
	int y;

	y = input->dda.draw_end;
	while (y <= input->res_y)
	{
		my_mlx_pixel_put(&input->img, x, y, FLOOR_COLOR);
		y++;
	}
}
