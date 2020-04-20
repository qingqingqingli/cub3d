/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_texture_num.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/16 14:17:57 by qli           #+#    #+#                 */
/*   Updated: 2020/04/20 10:56:47 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

/* don't think that it is needed now */
/* there will be a function to read the color from a texture pixel */
void 	ft_calculate_texture_num(t_input *input)
{
	input->wall.texture_number = input->array[input->dda.map_x]
	[input->dda.map_y] - 1;
}
