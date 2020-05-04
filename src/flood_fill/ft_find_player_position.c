/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_player_position.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 13:46:32 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

int	ft_find_player_position(t_input *input)
{
	char	c;
	int		player_present;

	c = 0;
	player_present = 0;
	while (input->array[input->flood_fill_y] != NULL)
	{
		while (input->array[input->flood_fill_y]
		[input->flood_fill_x] != '\0')
		{
			c = input->array[input->flood_fill_y][input->flood_fill_x];
			if (c == 'S' || c == 'N' || c == 'W' || c == 'E')
			{
				player_present = 1;
				return (player_present);
			}
			else
				input->flood_fill_x++;
		}
		input->flood_fill_x = 0;
		input->flood_fill_y++;
	}
	return (player_present);
}
