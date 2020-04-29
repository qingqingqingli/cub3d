/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_distance.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 14:43:20 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 15:08:17 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void 	ft_sort_distance(t_input *input)
{
	int 	i;
	t_sprite_pos 	temp;

	i = 0;
	while (i < input->sprite_data.sprite_number)
	{
		if (input->sprite_data.pos[i].distance < 
		input->sprite_data.pos[i + 1].distance)
		{
			temp = input->sprite_data.pos[i];
			input->sprite_data.pos[i] = input->sprite_data.pos[i + 1];
			input->sprite_data.pos[i + 1] = temp;
			i = 0;
		}
		else 
		{
			i++;
		}
	}
}
