/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_sprite_order.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 20:40:15 by qli           #+#    #+#                 */
/*   Updated: 2020/04/22 10:28:21 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_initiate_sprite_order(t_input *input)
{
	input->sprite_data.sprite_order = (int *)malloc(sizeof(int) *
	input->sprite_data.sprite_number);
	if (input->sprite_data.sprite_order == NULL)
		return (ft_return_error("Malloc failed\n", input));
	return (0);
}