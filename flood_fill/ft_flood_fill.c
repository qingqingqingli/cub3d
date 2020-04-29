/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_flood_fill.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 11:55:52 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 10:57:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void ft_flood_fill(t_input *input, unsigned int x, unsigned int y,
unsigned int height)
{
	if (input->array_copy[y][x] == '1' || input->array_copy[y][x] == 'f' 
	|| input->array_copy[y][x] == '2')
		return ;
	if (input->array_copy[y][x] == '0' || ft_check_position(input->array_copy[y][x]) == 1)
		input->array_copy[y][x] = 'f';
	if (x > 0)
		ft_flood_fill(input, x - 1, y, height);
	if (y > 0)
		ft_flood_fill(input, x, y - 1, height);
	if (x < ft_strlen(input->array_copy[y]) - 1)
		ft_flood_fill(input, x + 1, y, height);
	if (y < height - 1)
		ft_flood_fill(input, x, y + 1, height);
	if (x > 0 && y > 0)
		ft_flood_fill(input, x - 1, y - 1, height);
	if (x > 0 && y < height - 1)
		ft_flood_fill(input, x - 1, y + 1, height);
	if (x < ft_strlen(input->array_copy[y]) - 1 && y < height - 1)
		ft_flood_fill(input, x + 1, y + 1, height);
	if (x < ft_strlen(input->array_copy[y]) - 1 && y > 0)
		ft_flood_fill(input, x + 1, y - 1, height);
}
