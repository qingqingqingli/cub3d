/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   4_validate_map.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli           #+#    #+#                 */
/*   Updated: 2020/05/03 20:21:23 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_validate_map(t_input *input)
{
	if (ft_find_player_position(input) == 0)
		return (ft_return_error("Error\nNo player\n", input));
	// ft_duplicate_array(input, 0, 0);
	// ft_check_top_border(input);
	// ft_check_bottom_border(input);
	// ft_flood_fill(input, input->flood_fill_x, input->flood_fill_y);
	// // ft_print_2d_array(input->array_copy);
	// free(input->array_copy);
	return (0);
}
