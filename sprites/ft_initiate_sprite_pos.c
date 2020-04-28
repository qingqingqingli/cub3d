/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_initiate_sprite_pos.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/23 12:51:26 by qli           #+#    #+#                 */
/*   Updated: 2020/04/27 19:39:09 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

int 	ft_initiate_sprite_pos(t_input *input)
{
	int i;

	i = 0;
	input->sprite_data.pos = malloc(sizeof(t_sprite_pos) *
	input->sprite_data.sprite_number);
	if (input->sprite_data.pos == NULL)
		return (ft_return_error("Malloc failure\n", input));

	while (i < input->sprite_data.sprite_number)
	{
		input->sprite_data.pos[i].distance = 0.0;
		input->sprite_data.pos[i].x = 0.0;
		input->sprite_data.pos[i].y = 0.0;
		i++;
	}
	return (0);
}

// int 	ft_initiate_sprite_pos(t_input *input)
// {
// 	int i;

// 	i = 0;
// 	input->sprite_data.sprite_pos = (double **)malloc(sizeof(double *) *
// 	input->sprite_data.sprite_number);
// 	if (input->sprite_data.sprite_pos == NULL)
// 		return (ft_return_error("Malloc failure\n", input));
// 	while (i < input->sprite_data.sprite_number)
// 	{
// 		input->sprite_data.sprite_pos[i] = (double *)malloc(sizeof(double) *
// 		2);
// 		if (input->sprite_data.sprite_pos[i] == NULL)
// 			return (ft_return_error("Malloc failure\n", input));
// 		input->sprite_data.sprite_pos[i][0] = 0.0;
// 		input->sprite_data.sprite_pos[i][1] = 0.0;
// 		i++;
// 	}
// 	return (0);
// }
