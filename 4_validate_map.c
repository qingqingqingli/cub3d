/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli            #+#    #+#                */
/*   Updated: 2020/03/11 14:14:26 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int ft_find_first_0(t_input *input)
{
	while (input->array[input->flood_fill_x])
	{
		while(input->array[input->flood_fill_x][input->flood_fill_y] != '\0')
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

unsigned int ft_calculate_height(t_input *input)
{
	unsigned int height;

	height = 0;
	while (input->array[height])
		height++;
	return (height);
}

void ft_flood_fill(t_input *input, unsigned int x, unsigned int y, unsigned int height)
{
	if (input->array[x][y] == '1')
		return ;
	if (input->array[x][y] && input->array[x][y] != '\0')
		input->array[x][y] = 'f';
	if (x > 0)
		ft_flood_fill(input, x - 1, y, height);
	if (y > 0)
		ft_flood_fill(input, x, y - 1, height);
	// if (x < height - 1)
	// 	ft_flood_fill(input, x + 1, y, height);
	// if (y < ft_strlen(input->array[x]) - 1)
	// 	ft_flood_fill(input, x, y + 1, height);
}

int ft_validate_map(t_input *input)
{
	unsigned height;

	height = ft_calculate_height(input);
	/* find the first 0 to start the flood fill*/
	ft_find_first_0(input);
	/* transform all the 0, 2, S/N/W/E into 'f'. stop when it's 1 */
	ft_flood_fill(input, input->flood_fill_x, input->flood_fill_y, height);
	/* check all the border elements if there is an 'f'*/ 
	return (0);
}
