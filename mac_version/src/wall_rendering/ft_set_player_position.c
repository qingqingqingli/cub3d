/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_set_player_position.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:25:43 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_set_player_position(t_input *input)
{
	int position_x_int;
	int position_y_int;

	position_x_int = 0;
	position_y_int = 0;
	while (input->array[position_y_int] != NULL)
	{
		position_x_int = 0;
		while (input->array[position_y_int][position_x_int] != '\0')
		{
			if (ft_check_sprawning_pos(input->array[position_y_int]
			[position_x_int], input) == 1)
			{
				input->ray_casting.pos_x = (double)position_x_int + 0.5;
				input->ray_casting.pos_y = (double)position_y_int + 0.5;
				return ;
			}
			position_x_int++;
		}
		position_y_int++;
	}
	return ;
}
