/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   4_validate_map.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 21:25:32 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_validate_map(t_input *input)
{
	printf("*\n");
	ft_duplicate_array(input, 0, 0);
	printf("*1\n");
	ft_find_player_position(input);
	printf("*2\n");
	ft_flood_fill(input, input->flood_fill_x, input->flood_fill_y,
	ft_calculate_height(input->array_copy));
	printf("*3\n");
	if (ft_check_border(input) == -1)
		return (ft_return_error("Error\nIncorrect Map\n", input));
	printf("*4\n");
	free(input->array_copy);
	return (0);
}
