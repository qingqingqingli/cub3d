/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_set_color.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 15:37:30 by qli           #+#    #+#                 */
/*   Updated: 2020/04/21 15:49:59 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int		create_trgb(int r, int g, int b)
{
	return(r << 16 | g << 8 | b );
}

void 	ft_set_color(t_input *input)
{
	input->ceilling_color = create_trgb(input->ceilling_r,
	input->ceilling_g, input->ceilling_b);
	input->floor_color = create_trgb(input->floor_r,
	input->floor_g, input->floor_b);
}