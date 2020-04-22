/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_change_map_back.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 11:56:45 by qli           #+#    #+#                 */
/*   Updated: 2020/04/22 13:33:07 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int	ft_change_map_back(t_input *input)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (input->array_copy[x] != 0)
	{
		while (input->array_copy[x][y] != '\0')
		{
			if (input->array_copy[x][y] == 'f')
				input->array_copy[x][y] = '0';
			y++;
		}
		y = 0;
		x++;
	}
	return (0);
}
