/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_delta.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:12:21 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:16:26 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_calculate_delta(t_input *input)
{
	input->dda.delta_dis_x = fabs(1 / input->ray_casting.ray_direction_x);
	input->dda.delta_dis_y = fabs(1 / input->ray_casting.ray_direction_y);
}
