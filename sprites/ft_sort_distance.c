/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_distance.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 14:43:20 by qli           #+#    #+#                 */
/*   Updated: 2020/04/27 19:36:55 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

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

// void 	ft_swap_value(t_input *input, int i)
// {
// 	double 	distance_temp;
// 	int 	pos_x_temp;
// 	int 	pos_y_temp;

// 	distance_temp = input->sprite_data.sprite_distance[i];
// 	pos_x_temp = input->sprite_data.sprite_pos[i][0];
// 	pos_y_temp = input->sprite_data.sprite_pos[i][1];
// 	input->sprite_data.sprite_distance[i] = input->sprite_data.sprite_distance[i + 1];
// 	input->sprite_data.sprite_pos[i][0] = input->sprite_data.sprite_pos[i + 1][0];
// 	input->sprite_data.sprite_pos[i][1] = input->sprite_data.sprite_pos[i + 1][1];
// 	input->sprite_data.sprite_distance[i + 1] = distance_temp;
// 	input->sprite_data.sprite_pos[i + 1][0] = pos_x_temp;
// 	input->sprite_data.sprite_pos[i + 1][1] = pos_y_temp;
// }

// void 	ft_sort_distance(t_input *input)
// {
// 	int i;
// 	int sort;

// 	i = 0;
// 	sort = 1;
// 	while (i < input->sprite_data.sprite_number - 1)
// 	{
// 		if (input->sprite_data.sprite_distance[i] < 
// 		input->sprite_data.sprite_distance[i + 1])
// 		{
// 			sort = -1;
// 			ft_swap_value(input, i);
// 			i++;
// 		}
// 		if (input->sprite_data.sprite_distance[i] >= 
// 		input->sprite_data.sprite_distance[i + 1])
// 			i++;
// 		if (sort == -1)
// 			ft_sort_distance(input);
// 	}
// }