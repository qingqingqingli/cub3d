/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   6_ft_movement.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 11:57:31 by qli           #+#    #+#                 */
/*   Updated: 2020/04/14 18:16:28 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int 	ft_movement(t_input *input)
{
	mlx_hook(input->img.mlx_win, 2, 1L<<0, *ft_move_forward, input);
	mlx_hook(input->img.mlx_win, 2, 1L<<0, *ft_move_backward, input);
	mlx_hook(input->img.mlx_win, 2, 1L<<0, *ft_move_left, input);
	mlx_hook(input->img.mlx_win, 2, 1L<<0, *ft_move_right, input);
	mlx_loop_hook(input->img.mlx, *ft_calculate_ray, &input);
	return (0);
}
