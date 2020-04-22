/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_close.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 16:34:12 by qli           #+#    #+#                 */
/*   Updated: 2020/04/22 15:20:48 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void	ft_close(int keycode, t_input *input)
{
	if (keycode == ESC)
		mlx_destroy_window(input->img.mlx, input->img.mlx_win);
	ft_free_malloc(input);
	exit (0);
}