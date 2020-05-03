/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_border.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 11:54:50 by qli           #+#    #+#                 */
/*   Updated: 2020/05/03 07:26:03 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_check_top_border(t_input *input)
{
	int x;

	x = 0;
	if (input->array_copy[0] == NULL)
		return (ft_return_error("Error\nNo map\n", input));
	while (input->array_copy[0][x] != '\0')
	{
		if (input->array_copy[0][x] != '1' && input->array_copy[0][x] != ' ')
			return (ft_return_error("Error\nWrong map\n", input));
		x++;
	}
	return (0);
}

int		ft_check_bottom_border(t_input *input)
{
	int height;
	int x;

	x = 0;
	height = 0;
	while (input->array_copy[height] != NULL)
		height++;
	while (input->array_copy[height - 1][x] != '\0')
	{
		if (input->array_copy[height - 1][x] != '1' &&
		input->array_copy[height - 1][x] != ' ')
			return (ft_return_error("Error\nWrong map\n", input));
		x++;
	}
	return (0);
}
