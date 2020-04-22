/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_flood_fill.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 11:55:52 by qli           #+#    #+#                 */
/*   Updated: 2020/04/22 13:58:17 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void ft_flood_fill(t_input *input, unsigned int x, unsigned int y,
unsigned int height)
{
	if (input->array_copy[x][y] == '1' || input->array_copy[x][y] == 'f' 
	|| input->array_copy[x][y] == '2')
		return ;
	if (input->array_copy[x][y] == '0' || ft_check_position(input->array_copy[x][y]) == 1)
		input->array_copy[x][y] = 'f';
	if (x > 0)
		ft_flood_fill(input, x - 1, y, height);
	if (y > 0)
		ft_flood_fill(input, x, y - 1, height);
	if (x < height - 1)
		ft_flood_fill(input, x + 1, y, height);
	if (y < ft_strlen(input->array_copy[x]) - 1)
		ft_flood_fill(input, x, y + 1, height);
}
