/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_camera.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:04:40 by qli           #+#    #+#                 */
/*   Updated: 2020/04/13 14:10:19 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void ft_calculate_camera(t_input *input, int x)
{
	camera_x_pos = 2 * x / (double)input->res_x - 1;
}
