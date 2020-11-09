/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validate_map_4.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/03 17:25:29 by qli           #+#    #+#                 */
/*   Updated: 2020/05/05 16:02:33 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

static int		ft_check_double_player(t_input *input)
{
	int x;
	int y;
	int count;

	x = 0;
	y = 0;
	count = 0;
	while (input->array[y] != NULL)
	{
		while (input->array[y][x] != '\0')
		{
			if (input->array[y][x] == 'N' || input->array[y][x] == 'S'
			|| input->array[y][x] == 'E' || input->array[y][x] == 'W')
				count++;
			x++;
		}
		x = 0;
		y++;
	}
	if (count >= 2)
		return (-1);
	return (0);
}

static int		ft_check_map_content(t_input *input)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (input->array[y] != NULL)
	{
		while (input->array[y][x] != '\0')
		{
			if (input->array[y][x] != 'N' && input->array[y][x] != 'S'
			&& input->array[y][x] != 'E' && input->array[y][x] != 'W'
			&& input->array[y][x] != '1' && input->array[y][x] != '2'
			&& input->array[y][x] != ' ' && input->array[y][x] != '0')
				return (-1);
			x++;
		}
		x = 0;
		y++;
	}
	return (0);
}

int				ft_validate_map(t_input *input)
{
	if (ft_check_map_content(input) == -1)
		return (ft_return_error("Error\nmap error\n", input));
	if (ft_find_player_position(input) == 0)
		return (ft_return_error("Error\nNo player\n", input));
	if (ft_check_double_player(input) == -1)
		return (ft_return_error("Error\nMultiple player\n", input));
	ft_check_top_border(input);
	ft_check_bottom_border(input);
	ft_check_left_border(input);
	input->array_copy = ft_split(input->line, '\n');
	if (!input->array_copy)
		return (ft_return_error("Error\nArray creation failure\n", input));
	ft_flood_fill(input, input->flood_fill_x, input->flood_fill_y);
	ft_free_2d_array(input->array_copy);
	return (0);
}
