/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_color_pixel.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/17 10:50:57 by qli           #+#    #+#                 */
/*   Updated: 2020/04/20 16:53:38 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_get_color_pixel(t_input *input, int x, int y)
{
	char 	*dst;

	dst = input->north.addr + (y * input->north.line_length +
	x * (input->north.bits_per_pixel / 8));
	input->wall.wall_color = *(unsigned int*)dst;
}
