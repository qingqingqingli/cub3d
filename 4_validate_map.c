/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   4_validate_map.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/03 17:25:29 by qli           #+#    #+#                 */
/*   Updated: 2020/05/03 17:49:45 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_validate_map(t_input *input)
{
	if (ft_find_player_position(input) == 0)
		return (ft_return_error("Error\nNo player\n", input));
	ft_check_top_border(input);
	ft_check_bottom_border(input);
	// ft_check_left_border(input);
	ft_duplicate_array(input, 0, 0);
	ft_flood_fill(input, input->flood_fill_x, input->flood_fill_y);
	free(input->array_copy);
	return (0);
}
