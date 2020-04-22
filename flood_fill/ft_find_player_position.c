/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_player_position.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 13:46:32 by qli           #+#    #+#                 */
/*   Updated: 2020/04/22 13:55:32 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_find_player_position(t_input *input)
{
	char c;

	c = 0;
	while (input->array_copy[input->flood_fill_x] != NULL)
	{
		while (input->array_copy[input->flood_fill_x][input->flood_fill_y] != '\0')
		{
			c = input->array_copy[input->flood_fill_x][input->flood_fill_y];
			if(c == 'S' || c == 'N' || c == 'W' || c == 'E')
				return (0);
			else
				input->flood_fill_y++;
		}
		input->flood_fill_y = 0;
		input->flood_fill_x++;
	}
	return (0);
}
