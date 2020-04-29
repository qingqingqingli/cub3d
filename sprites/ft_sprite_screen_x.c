/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sprite_screen_x.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 16:52:40 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:48:02 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_sprite_screen_x(t_input *input)
{
	input->sprite_data.sprite_screen_x = ((input->res_x / 2)
	* (1 + input->sprite_data.transform_x / input->sprite_data.transform_y));
}
