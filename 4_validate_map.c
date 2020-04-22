/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   4_validate_map.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:16:45 by qli           #+#    #+#                 */
/*   Updated: 2020/04/22 13:53:37 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int ft_validate_map(t_input *input)
{
	ft_find_player_position(input);
	printf("input->flood_fill_x is %d\n", input->flood_fill_x);
	printf("input->flood_fill_y is %d\n", input->flood_fill_y);
	ft_flood_fill(input, input->flood_fill_x, input->flood_fill_y,
	ft_calculate_height(input->array_copy));
	if (ft_check_border(input) == -1)
		return (ft_return_error("Map flooded\n", input));
	else
	ft_print_input(*input); //print input
	free(input->array_copy);
	return (0);
}
