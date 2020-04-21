/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   my_mlx_pixel_put.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:40:29 by qli           #+#    #+#                 */
/*   Updated: 2020/04/21 15:27:08 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void	my_mlx_pixel_put(t_mlx *img, int x, int y, int color)
{
	char	*dst;

	dst = img->addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}
