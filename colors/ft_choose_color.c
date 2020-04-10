/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_choose_color.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:19:46 by qli           #+#    #+#                 */
/*   Updated: 2020/04/10 14:20:18 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

void 	ft_choose_color(t_input *input)
{
	if (input->array[input->dda.map_y][input->dda.map_y] == '1')
		input->color.reserve = RED;
	if (input->array[input->dda.map_y][input->dda.map_y] == '2')
		input->color.reserve = GREEN;
	if (input->dda.side == 1)
		input->color.reserve = input->color.reserve / 2;
}
