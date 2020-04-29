/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_put_color_ceilling.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:29:56 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:19:42 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_put_color_ceilling(t_input *input, int x)
{
	int y;

	y = 0;
	while (y < input->dda.draw_start)
	{
		ft_render_img(input, x, y, input->ceilling_color);
		y++;
	}
}
