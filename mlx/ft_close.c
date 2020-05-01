/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_close.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 16:34:12 by qli           #+#    #+#                 */
/*   Updated: 2020/05/01 10:18:28 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	ft_close(t_input *input)
{
	mlx_destroy_image(input->img.mlx, input->img.img);
	if (input->bmp_needed == 0)
		mlx_destroy_image(input->img.mlx, input->img_2.img);
	if (input->bmp_needed == 0)
		mlx_destroy_window(input->img.mlx, input->img.mlx_win);
	ft_free_malloc(input);
	exit(0);
}
