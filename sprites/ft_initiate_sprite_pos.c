/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_sprite_pos.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 12:51:26 by qli           #+#    #+#                 */
/*   Updated: 2020/04/24 12:09:14 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_initiate_sprite_pos(t_input *input)
{
	int i;

	i = 0;
	input->sprite_data.sprite_pos = (double **)malloc(sizeof(double *) *
	input->sprite_data.sprite_number);
	if (input->sprite_data.sprite_pos == NULL)
		return (ft_return_error("Malloc failure\n", input));
	while (i < input->sprite_data.sprite_number)
	{
		input->sprite_data.sprite_pos[i] = (double *)malloc(sizeof(double) *
		2);
		if (input->sprite_data.sprite_pos[i] == NULL)
			return (ft_return_error("Malloc failure\n", input));
		input->sprite_data.sprite_pos[i][0] = 0.0;
		input->sprite_data.sprite_pos[i][1] = 0.0;
		i++;
	}
	return (0);
}
