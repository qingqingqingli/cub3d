/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   10_put_color.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/09 16:38:57 by qli           #+#    #+#                 */
/*   Updated: 2020/04/09 17:40:30 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void 	ft_put_color_ceilling(t_input *input, int x)
{
	int y;

	y = 0;
	while (y < input->dda.draw_start)
	{
		my_mlx_pixel_put(&input->img, x, y, GREEN);
		y++;
	}
}

void 	ft_put_color_wall(t_input *input, int x)
{
	int y;

	y = input->dda.draw_start;
	while (y < input->dda.draw_end)
	{
		my_mlx_pixel_put(&input->img, x, y, RED);
		y++;
	}
}

void 	ft_put_color_floor(t_input *input, int x)
{
	int y;

	y = input->dda.draw_end;
	while (y <= input->res_y)
	{
		my_mlx_pixel_put(&input->img, x, y, BLUE);
		y++;
	}
}

int		ft_put_color(t_input *input, int x)
{
	ft_put_color_ceilling(input, x);
	ft_put_color_wall(input, x);
	ft_put_color_floor(input, x);
	return (0);
}