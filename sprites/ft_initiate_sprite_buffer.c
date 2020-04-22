/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_sprite_buffer.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 19:54:44 by qli           #+#    #+#                 */
/*   Updated: 2020/04/22 10:28:21 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_initiate_sprite_buffer(t_input *input)
{
	input->sprite_data.buffer = (double *)malloc(sizeof(double) *
	input->res_x);
	if (input->sprite_data.buffer == NULL)
		return (ft_return_error("Malloc failed\n", input));
	return (0);
}