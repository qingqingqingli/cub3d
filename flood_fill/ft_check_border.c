/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_border.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 11:54:50 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 21:38:45 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_check_top_border(t_input *input)
{
	int x;

	x = 0;
	if (input->array_copy[0] == NULL)
		return (-1);
	while (input->array_copy[0][x] != '\0')
	{
		if (input->array_copy[0][x] == 'f')
			return (-1);
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
	while (input->array_copy[height] != 0)
	{
		printf("%s\n", input->array_copy[height]);
		printf("height is %d\n", height);
		height++;
	}
	printf("height is %d\n", height);
	while (input->array_copy[height - 1][x] != '\0')
	{
		if (input->array_copy[height - 1][x] == 'f')
			return (-1);
		x++;
	}
	return (0);
}

int		ft_check_border(t_input *input)
{
	if (ft_check_top_border(input) == -1)
		return (-1);
	// if (ft_check_bottom_border(input) == -1)
	// 	return (-1);
	// if (ft_check_left_border(input) == -1)
	// 	return (-1);
	// if (ft_check_right_border(input) == -1)
	// 	return (-1);
	return (0);
}

// int		ft_check_border(t_input *input)
// {
// 	unsigned int x;
// 	unsigned int y;

// 	x = 0;
// 	y = 0;
// 	while (input->array_copy[x][y] != '\0')
// 	{
// 		if (input->array_copy[x][y] == 'f')
// 			return (-1);
// 		y++;
// 	}
// 	x++;
// 	y = 0;
// 	while (x < ft_calculate_height(input->array_copy) - 2)
// 	{
// 		if (input->array_copy[x][y] == 'f' ||
// 		input->array_copy[x][ft_strlen(input->array_copy[x]) - 1] == 'f')
// 			return (-1);
// 		x++;
// 	}
// 	x++;
// 	while (input->array_copy[x][y] != '\0')
// 	{
// 		if (input->array_copy[x][y] == 'f')
// 			return (-1);
// 		y++;
// 	}
// 	return (0);
// }