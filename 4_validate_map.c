/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   4_validate_map.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli           #+#    #+#                 */
/*   Updated: 2020/05/01 10:00:41 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_validate_map(t_input *input)
{
	if (ft_find_player_position(input) == 0)
		return (ft_return_error("Error\nNo player\n", input));
	ft_duplicate_array(input, 0, 0);
	ft_flood_fill(input, input->flood_fill_x, input->flood_fill_y,
	ft_calculate_height(input->array_copy));
	if (ft_check_border(input) == -1)
		return (ft_return_error("Error\nIncorrect Map\n", input));
	free(input->array_copy);
	return (0);
}
