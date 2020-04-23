/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   8_render_sprites.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/21 19:44:54 by qli           #+#    #+#                 */
/*   Updated: 2020/04/23 17:30:45 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int 	ft_render_sprites(t_input *input)
{
	int i;

	i = 0;
	ft_locate_sprite(input);
	ft_sort_distance(input);
	while (i < input->sprite_data.sprite_number)
	{
		ft_translate_sprite_pos(input, i);
		ft_inverse_camera(input); //value does not change
		ft_transform_sprite(input, i);
		ft_sprite_screen_x(input);
		ft_calculate_sprite_height(input);
		ft_draw_sprite_y(input);
		// printf("i is %d\n",i);
		// printf("input->sprite_data.transform_x is %f\n",input->sprite_data.transform_x);
		// printf("input->sprite_data.transform_y is %f\n",input->sprite_data.transform_y);
		// printf("input->sprite_data.sprite_x is %f\n",input->sprite_data.sprite_x);
		// printf("input->sprite_data.sprite_y is %f\n",input->sprite_data.sprite_y);
		// printf("input->sprite_data.inverse_camera is %f\n",input->sprite_data.inverse_camera);
		// printf("input->sprite_data.sprite_screen_x is %d\n",input->sprite_data.sprite_screen_x);
		// printf("input->sprite_data.sprite_height is %d\n",input->sprite_data.sprite_height);
		// printf("input->sprite_data.draw_start_y is %d\n",input->sprite_data.draw_start_y);
		// printf("input->sprite_data.draw_end_y is %d\n",input->sprite_data.draw_end_y);
		i++;
	}
	return (0);
}
