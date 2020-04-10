/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_color_wall.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:31:38 by qli           #+#    #+#                 */
/*   Updated: 2020/04/10 14:32:08 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_put_color_wall(t_input *input, int x)
{
	int y;

	y = input->dda.draw_start;
	while (y < input->dda.draw_end)
	{
		my_mlx_pixel_put(&input->img, x, y, ORANGE);
		y++;
	}
}
