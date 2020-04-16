/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_texture_num.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/16 14:17:57 by qli           #+#    #+#                 */
/*   Updated: 2020/04/16 18:08:28 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

/* be aware that it is the ASCII value of the characters */
void 	ft_calculate_texture_num(t_input *input)
{
	// printf("input->array[input->dda.map_x][input->dda.map_y] is %c\n", 
	// input->array[input->dda.map_x][input->dda.map_y]);
	input->wall.texture_number = input->array[input->dda.map_x]
	[input->dda.map_y] - 1;
}
