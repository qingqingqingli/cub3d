/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_sprite_number.c                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 20:26:01 by qli           #+#    #+#                 */
/*   Updated: 2020/04/23 13:09:46 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_calculate_sprite_number(t_input *input)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while(input->array[x] != NULL)
	{
		while(input->array[x][y] != '\0')
		{
			if(input->array[x][y] == '2')
				input->sprite_data.sprite_number++;
			y++;
		}
		y = 0;
		x++;
	}
}