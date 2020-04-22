/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_first_0.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 11:53:53 by qli           #+#    #+#                 */
/*   Updated: 2020/04/22 13:42:51 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int ft_find_first_0(t_input *input)
{
	while (input->array[input->flood_fill_x])
	{
		while (input->array[input->flood_fill_x][input->flood_fill_y] != '\0')
		{
			if (input->array[input->flood_fill_x][input->flood_fill_y] == '0')
				return (1);
			else
				input->flood_fill_y++;
		}
		input->flood_fill_y = 0;
		input->flood_fill_x++;
	}
	return (0);
}
