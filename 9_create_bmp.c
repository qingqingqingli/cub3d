/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   9_create_bmp.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/28 11:19:46 by qli           #+#    #+#                 */
/*   Updated: 2020/05/02 11:53:39 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_padding(t_input *input)
{
	while ((input->res_x * 3 + input->bmp.padding) % 4 != 0)
		input->bmp.padding++;
}

int		ft_write_file_header(int fd, t_input *input)
{
	char file_header[14];

	ft_bzero(file_header, 14);
	file_header[0] = 'B';
	file_header[1] = 'M';
	input->bmp.image_size = (input->res_x + input->bmp.padding) * input->res_y;
	input->bmp.file_size = 54 + 3 * input->bmp.image_size;
	*(int *)(file_header + 2) = input->bmp.file_size;
	*(short *)(file_header + 10) = 54;
	if (write(fd, &file_header, 14) < 0)
		return (ft_return_error("Error\nWrite error\n", input));
	return (0);
}

int		ft_write_image_header(int fd, t_input *input)
{
	char image_header[40];

	ft_bzero(image_header, 40);
	*(unsigned int *)(image_header) = 40;
	*(unsigned int *)(image_header + 4) = input->res_x;
	*(unsigned int *)(image_header + 8) = input->res_y;
	*(short int *)(image_header + 12) = 1;
	*(short int *)(image_header + 14) = 24;
	*(unsigned int *)(image_header + 20) = 3 * input->bmp.image_size;
	*(unsigned int *)(image_header + 24) = 24;
	*(unsigned int *)(image_header + 28) = 24;
	if (write(fd, &image_header, 40) < 0)
		return (ft_return_error("Error\nWrite error\n", input));
	return (0);
}

int		ft_write_rgb(int fd, t_input *input, int x, int y)
{
	int position;

	position = x + y * input->bmp_color.line_length / 4;
	input->bmp_color.addr = (int *)mlx_get_data_addr(input->img.img,
	&input->bmp_color.bits_per_pixel, &input->bmp_color.line_length,
	&input->bmp_color.endian);
	if (input->bmp_color.addr == NULL)
		return (ft_return_error("Error\nMlx addr error\n", input));
	write(fd, &input->bmp_color.addr[position], 3);
	return (0);
}

int		ft_create_bmp(t_input *input)
{
	int 	fd;
	int		x;
	int		y;
	char 	*file_name;

	x = 0;
	y = input->res_y - 1;
	file_name = "./bmp_screenshot/cub3d.bmp";
	fd = open(file_name, O_RDWR | O_TRUNC | O_CREAT, 0666);
	if (fd == -1)
		return (ft_return_error("Error\nOpen file error\n", input));
	ft_check_padding(input);
	ft_write_file_header(fd, input);
	ft_write_image_header(fd, input);
	while (y >= 0)
	{
		x = 0;
		while (x < input->res_x)
		{
			ft_write_rgb(fd, input, x, y);
			x++;
		}
		write(fd, "\0\0\0", input->bmp.padding);
		y--;
	}
	return (0);
}
