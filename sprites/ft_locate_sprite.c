/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_locate_sprite.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 15:50:01 by qli           #+#    #+#                 */
/*   Updated: 2020/04/25 08:52:29 by qli           ########   odam.nl         */
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
	while (input->array[x] != NULL)
	{
		while (input->array[x][y] != '\0')
		{
			if (input->array[x][y] == '2')
			{
				input->sprite_data.sprite_pos[i][0] = x;
				input->sprite_data.sprite_pos[i][1] = y;
				ft_calculate_sprite_distance(input, i);
				i++;
			}
			y++;
		}
		y = 0;
		x++;
	}
}