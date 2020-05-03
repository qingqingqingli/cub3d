/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_flood_fill.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 11:55:52 by qli           #+#    #+#                 */
/*   Updated: 2020/05/03 07:38:42 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	ft_flood_fill(t_input *input, int x, int y)
{
	if (input->array_copy[y][x] == '\0')
		return (ft_return_error("Error\nWrong map\n", input));
	if (input->array_copy[y][x] == '1' || input->array_copy[y][x] == 'f')
		return (0);
	if (input->array_copy[y][x] == '0' || input->array_copy[y][x] == '2'
	|| ft_check_position(input->array_copy[y][x]) == 1)
	{
		input->array_copy[y][x] = 'f';
		ft_flood_fill(input, x - 1, y);
		ft_flood_fill(input, x, y - 1);
		ft_flood_fill(input, x + 1, y);
		ft_flood_fill(input, x, y + 1);
		ft_flood_fill(input, x - 1, y - 1);
		ft_flood_fill(input, x - 1, y + 1);
		ft_flood_fill(input, x + 1, y + 1);
		ft_flood_fill(input, x + 1, y - 1);
	}
	else
		return (ft_return_error("Error\nWrong map\n", input));
	return (0);
}
