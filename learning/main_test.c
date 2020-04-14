/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_test.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 16:18:13 by qli           #+#    #+#                 */
/*   Updated: 2020/04/13 19:29:54 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void	my_mlx_pixel_put(t_mlx *data, int x, int y, int color)
{
	char	*dst;

	/*
	** line_length differs from the actual window width
	** ALWAYS calculate the memory offset using the line length set by mlx_get_data_addr
	** offset = y * data->line_length + x * (data->bits_per_pixel / 8)
	*/
	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_mlx	img;

	/* 
	** initialise mlx:
	** mlx_init returns a void pointer that holds the address
	** of newly created MLX instance
	*/
	mlx = mlx_init();
	/* 
	** initialise a window
	** gives the window a height, width and a title
	*/
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	/* 
	** push pixels to the window
	** need to buffer all pixels to an image, then push to the window
	** with this step, we are initialising the image with size 1920 * 1090
	*/
	img.img = mlx_new_image(mlx, 1920, 1080);
    /*
    ** write pixels to an image
	** get the memory address on which to mute the bytes accordingly
	** pass the required variables by reference
	** now we have the image address, but no pixels
    */
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	/*
	** now we are ready to mimic the behaviour of mlx_pixel_put
	** find the address & set it to certain color
	*/
	my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
	my_mlx_pixel_put(&img, 15, 15, 0x00FF0000);
	my_mlx_pixel_put(&img, 25, 25, 0x00FF0000);
	my_mlx_pixel_put(&img, 35, 35, 0x00FF0000);
	/*
	** push the create image to the window
	*/
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	/* mlx_loop to initiate the window rendering */	
	mlx_loop(mlx);
}