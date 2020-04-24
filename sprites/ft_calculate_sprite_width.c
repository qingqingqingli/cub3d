/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_sprite_width.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 18:40:33 by qli           #+#    #+#                 */
/*   Updated: 2020/04/24 09:14:31 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_sprite_width(t_input *input)
{
	input->sprite_data.sprite_width = abs((int)(input->res_y 
	/ input->sprite_data.transform_y));
}