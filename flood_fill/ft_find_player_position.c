/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_player_position.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 13:46:32 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 10:57:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int 	ft_find_player_position(t_input *input)
{
	char c;

	c = 0;
	while (input->array_copy[input->flood_fill_y] != NULL)
	{
		while (input->array_copy[input->flood_fill_y][input->flood_fill_x] != '\0')
		{
			c = input->array_copy[input->flood_fill_y][input->flood_fill_x];
			if(c == 'S' || c == 'N' || c == 'W' || c == 'E')
				return (0);
			else
				input->flood_fill_x++;
		}
		input->flood_fill_x = 0;
		input->flood_fill_y++;
	}
	return (0);
}
