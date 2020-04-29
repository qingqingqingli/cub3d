/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_border.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 11:54:50 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 10:57:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int ft_check_border(t_input *input)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	y = 0;
	/* check first line */
	while (input->array_copy[x][y] != '\0')
	{
		if (input->array_copy[x][y] == 'f')
			return (-1);
		y++;
	}
	/* check first and last char of the middle lines */
	x++;
	y = 0;
	while (x < ft_calculate_height(input->array_copy) - 2)
	{
		if (input->array_copy[x][y] == 'f' ||
		input->array_copy[x][ft_strlen(input->array_copy[x]) - 1] == 'f')
			return (-1);
		x++;
	}
	x++;
	/* check last line */
	while (input->array_copy[x][y] != '\0')
	{
		if (input->array_copy[x][y] == 'f')
			return (-1);
		y++;
	}
	return (0);
}
