/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   initiate_functions.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/04 20:33:53 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 20:34:54 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_initiate_variables(t_input *input)
{
	ft_set_player_position(input);
	ft_set_player_orientation(input);
	ft_set_plane_orientation(input);
	ft_set_color(input);
}

void	ft_initiate_sprite(t_input *input)
{
	ft_initiate_sprite_buffer(input);
	ft_calculate_sprite_number(input);
	ft_initiate_sprite_pos(input);
}

void	ft_initiate_texture(t_input *input)
{
	ft_initiate_north_texture(input);
	ft_initiate_south_texture(input);
	ft_initiate_west_texture(input);
	ft_initiate_east_texture(input);
	ft_initiate_sprite_texture(input);
}
