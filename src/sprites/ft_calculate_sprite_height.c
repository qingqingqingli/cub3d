/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_sprite_height.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 17:10:05 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_calculate_sprite_height(t_input *input)
{
	input->sprite_data.sprite_height = abs((int)(input->res_y /
	input->sprite_data.transform_y));
}
