/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_set_player_position.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:25:43 by qli           #+#    #+#                 */
/*   Updated: 2020/04/13 18:55:32 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_set_player_position(t_input *input)
{
	int position_x_int;
	int position_y_int;
	
	position_x_int = 0;
	position_y_int = 0;
	while(input->array[position_y_int] != NULL)
	{
		while(input->array[position_y_int][position_x_int] != '\0')
		{
			if(ft_check_sprawning_pos(input->array[position_y_int][position_x_int], input) == 1)
			{
				position_x = (double)position_x_int + 0.5;
				position_y = (double)position_y_int + 0.5;
				return (0);
			}
			position_x_int++;
		}
		position_x_int = 0;
		position_y_int++;
	}
	return (0);
}
