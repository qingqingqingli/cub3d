/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_sprite_distance.c                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 20:19:00 by qli           #+#    #+#                 */
/*   Updated: 2020/04/22 10:28:21 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int ft_initiate_sprite_distance(t_input *input)
{
	input->sprite_data.sprite_distance = (double *)malloc(sizeof(double)
	* input->sprite_data.sprite_number);
	if (input->sprite_data.sprite_distance == NULL)
		return (ft_return_error("Malloc failed\n", input));
	return (0);
}