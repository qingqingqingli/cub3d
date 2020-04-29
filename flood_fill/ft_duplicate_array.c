/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_duplicate_array.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 10:59:00 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:20:58 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	ft_duplicate_array(t_input *input)
{
	int x;
	int y;
	int height;

	x = 0;
	y = 0;
	height = (int)ft_calculate_height(input->array);
	input->array_copy = (char **)malloc(sizeof(char *) * height);
	if (input->array_copy == NULL)
		return (ft_return_error("Error\nMalloc failure\n", input));
	while (input->array[x] != NULL)
	{
		input->array_copy[x] = (char *)malloc(sizeof(char) * (
		(int)ft_strlen(input->array[x]) + 1));
		while (input->array[x][y] != '\0')
		{
			input->array_copy[x][y] = input->array[x][y];
			y++;
		}
		input->array_copy[x][y] = '\0';
		y = 0;
		x++;
	}
	return (0);
}
