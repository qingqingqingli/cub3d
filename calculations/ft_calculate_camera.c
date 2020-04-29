/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_camera.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:04:40 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:16:21 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_calculate_camera(t_input *input, int x)
{
	input->ray_casting.camera_x = 2 * x / (double)input->res_x - 1;
}
