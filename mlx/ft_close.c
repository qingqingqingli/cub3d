/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_close.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 16:34:12 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 16:37:23 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	ft_close(t_input *input)
{
	mlx_destroy_image(input->img.mlx, input->img.img);
	mlx_destroy_image(input->img.mlx, input->img_2.img);
	mlx_destroy_window(input->img.mlx, input->img.mlx_win);
	ft_free_malloc(input);
	exit(0);
}
