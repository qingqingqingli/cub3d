/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sprite_screen_x.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 16:52:40 by qli           #+#    #+#                 */
/*   Updated: 2020/04/23 16:56:25 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_sprite_screen_x(t_input *input)
{
	input->sprite_data.sprite_screen_x = (int)((input->res_x / 2)
	* (1 + input->sprite_data.transform_x / input->sprite_data.transform_y));
}
