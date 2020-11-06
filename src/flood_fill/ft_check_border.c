/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_border.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 11:54:50 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

int		ft_check_top_border(t_input *input)
{
	int x;

	x = 0;
	if (input->array[0] == NULL)
		return (ft_return_error("Error\nNo map\n", input));
	while (input->array[0][x] != '\0')
	{
		if (input->array[0][x] != '1' && input->array[0][x] != ' ')
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
	height = ft_calculate_height(input->array);
	while (input->array[height - 1][x] != '\0')
	{
		if (input->array[height - 1][x] != '1' &&
		input->array[height - 1][x] != ' ')
			return (ft_return_error("Error\nWrong map\n", input));
		x++;
	}
	return (0);
}

int		ft_check_left_border(t_input *input)
{
	int height;

	height = 0;
	while (height < ft_calculate_height(input->array))
	{
		if (input->array[height][0] != '1' &&
		input->array[height][0] != ' ')
			return (ft_return_error("Error\nWrong map\n", input));
		height++;
	}
	return (0);
}
