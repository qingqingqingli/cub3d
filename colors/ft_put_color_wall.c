/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_color_wall.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:31:38 by qli           #+#    #+#                 */
/*   Updated: 2020/04/15 16:35:20 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_put_color_wall(t_input *input, int x)
{
	int y;
	int color;

	color = 0;
	y = input->dda.draw_start;
	while (y < input->dda.draw_end)
	{
		if (input->dda.side == 1)
		{
			color = (WALL_COLOR >> 1) & 8355711; 
			my_mlx_pixel_put(&input->img, x, y, color);
		}
		else if (input->dda.side == 0)
			my_mlx_pixel_put(&input->img, x, y, WALL_COLOR);
		y++;
	}
}
