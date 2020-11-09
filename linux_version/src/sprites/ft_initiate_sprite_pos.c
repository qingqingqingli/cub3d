/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_sprite_pos.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 12:51:26 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

int		ft_initiate_sprite_pos(t_input *input)
{
	int i;

	i = 0;
	input->sprite_data.pos = malloc(sizeof(t_sprite_pos) *
	input->sprite_data.sprite_number);
	if (input->sprite_data.pos == NULL)
		return (ft_return_error("Error\nMalloc failure\n", input));
	else
		input->sprite_data.pos_present = 1;
	while (i < input->sprite_data.sprite_number)
	{
		input->sprite_data.pos[i].distance = 0.0;
		input->sprite_data.pos[i].x = 0.0;
		input->sprite_data.pos[i].y = 0.0;
		i++;
	}
	return (0);
}
