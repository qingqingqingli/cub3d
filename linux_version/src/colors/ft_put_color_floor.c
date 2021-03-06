/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_color_floor.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:32:32 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_put_color_floor(t_input *input, int x)
{
	int y;

	y = input->dda.draw_end;
	while (y < input->res_y)
	{
		ft_render_img(input, x, y, input->floor_color);
		y++;
	}
}
