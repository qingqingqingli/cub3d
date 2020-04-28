/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_locate_sprite.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 15:50:01 by qli           #+#    #+#                 */
/*   Updated: 2020/04/27 19:24:40 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_locate_sprite(t_input *input)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 0;
	i = 0;
	while (input->array[y] != NULL)
	{
		while (input->array[y][x] != '\0')
		{
			if (input->array[y][x] == '2')
			{
				input->sprite_data.pos[i].x = (double)x + 0.5;
				input->sprite_data.pos[i].y = (double)y + 0.5;
				ft_calculate_sprite_distance(input, i);
				i++;
			}
			x++;
		}
		x = 0;
		y++;
	}
}

// void 	ft_locate_sprite(t_input *input)
// {
// 	int x;
// 	int y;
// 	int i;

// 	x = 0;
// 	y = 0;
// 	i = 0;
// 	while (input->array[y] != NULL)
// 	{
// 		while (input->array[y][x] != '\0')
// 		{
// 			if (input->array[y][x] == '2')
// 			{
// 				input->sprite_data.sprite_pos[i][0] = (double)x + 0.5;
// 				input->sprite_data.sprite_pos[i][1] = (double)y + 0.5;
// 				ft_calculate_sprite_distance(input, i);
// 				i++;
// 			}
// 			x++;
// 		}
// 		x = 0;
// 		y++;
// 	}
// }