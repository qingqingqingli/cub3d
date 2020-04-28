/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_line_height.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/10 14:15:58 by qli           #+#    #+#                 */
/*   Updated: 2020/04/27 20:17:57 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

/* translate the ray len to how many pixels need to be draw ss*/
void 	ft_calculate_line_height(t_input *input)
{
	input->dda.line_height = (int)(input->res_y / input->dda.ray_len);
}