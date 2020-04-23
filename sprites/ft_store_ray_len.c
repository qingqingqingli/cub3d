/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_store_ray_len.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 19:48:07 by qli           #+#    #+#                 */
/*   Updated: 2020/04/23 13:24:54 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_store_ray_len(t_input *input, int x)
{
	input->sprite_data.buffer[x] = input->dda.ray_len;
}
