/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   minilibx_test.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 16:18:13 by qli           #+#    #+#                 */
/*   Updated: 2020/04/13 19:29:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void	my_mlx_pixel_put(t_mlx *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_mlx	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 250, 250, "Hello world!");
	img.img = mlx_new_image(mlx, 250, 250);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
	my_mlx_pixel_put(&img, 15, 15, 0x00FF0000);
	my_mlx_pixel_put(&img, 25, 25, 0x00FF0000);
	my_mlx_pixel_put(&img, 35, 35, 0x00FF0000);
	my_mlx_pixel_put(&img, 45, 45, 0x00FF0000);
	my_mlx_pixel_put(&img, 55, 55, 0x00FF0000);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}