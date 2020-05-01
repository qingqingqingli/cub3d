/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   9_create_bmp.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/28 11:19:46 by qli           #+#    #+#                 */
/*   Updated: 2020/05/01 10:59:05 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_initiate_file_header(t_input *input)
{
	input->bmp.image_size = input->res_x * input->res_y;
	input->bmp.file_size = 54 + 4 * input->bmp.image_size;
	input->bmp.dpi = 72;
	input->bmp.ppm = input->bmp.dpi * 39.375;
	ft_memcpy(input->file_header.bitmap_type, "BM", 2);
	input->file_header.file_size = input->bmp.file_size;
	input->file_header.reserved1 = 0;
	input->file_header.reserved2 = 0;
	input->file_header.offset_bits = 0;
}

void	ft_initiate_image_header(t_input *input)
{
	input->image_header.size_header = sizeof(input->file_header);
	input->image_header.width = input->res_x;
	input->image_header.height = input->res_y;
	input->image_header.planes = 1;
	input->image_header.bit_count = 24;
	input->image_header.compression = 0;
	input->image_header.image_size = input->bmp.image_size;
	input->image_header.ppm_x = input->bmp.ppm;
	input->image_header.ppm_y = input->bmp.ppm;
	input->image_header.clr_used = 0;
	input->image_header.clr_important = 0;
}

int		ft_create_image(t_input *input)
{
	int 	fd;
	char 	*file_name;
	int 	color;
	int 	x;
	int 	y;

	color = 0;
	x = 0;
	y = input->res_y - 1;
	file_name = "bmp_screenshot/cub3d.bmp";
	fd = open(file_name, O_TRUNC | O_RDWR | O_CREAT);
	if (fd == -1)
		return (ft_return_error("Open file error\n", input));
	write(fd, &input->file_header, 14);
	write(fd, &input->image_header, sizeof(input->file_header));
	while (y >= 0)
	{
		x = 0;
		while (x < input->res_x)
		{
			input->bmp_color.addr = (int *)mlx_get_data_addr(input->img.img, &input->bmp_color.bits_per_pixel,
			&input->bmp_color.line_length, &input->bmp_color.endian);
			color = input->bmp_color.addr[y + x * input->bmp_color.line_length / 4];
			/* need to add error protection */
			write(fd, &color, sizeof(color));
			x++;
		}
		y--;
	}
	return (0);
}

int		ft_create_bmp(t_input *input)
{
	printf("~~~~000\n");
	ft_initiate_file_header(input);
	printf("~~~~1111\n");
	ft_initiate_image_header(input);
	printf("~~~~222\n");
	// ft_create_image(input);
	printf("~~~~333\n");
	return (0);
}