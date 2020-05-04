/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_sprite_buffer.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 19:54:44 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

int		ft_initiate_sprite_buffer(t_input *input)
{
	input->sprite_data.buffer = (double *)malloc(sizeof(double) *
	input->res_x);
	if (input->sprite_data.buffer == NULL)
		return (ft_return_error("Error\nMalloc failed\n", input));
	else
		input->sprite_data.buffer_present = 1;
	return (0);
}
