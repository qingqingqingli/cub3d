/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_map_location.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:10:52 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:18:39 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	ft_map_location(t_input *input)
{
	input->dda.map_x = (int)input->ray_casting.pos_x;
	input->dda.map_y = (int)input->ray_casting.pos_y;
}
