/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   6_ft_movement.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/14 11:57:31 by qli           #+#    #+#                 */
/*   Updated: 2020/04/15 16:46:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int 	ft_key_movement(int keycode, t_input *input)
{
	if (keycode == KEY_DOWN || keycode == Z)
		input->move.move_backward = 1;
	else if (keycode == KEY_UP || keycode == W)
		input->move.move_forward = 1;
	else if (keycode == KEY_LEFT || keycode == A)
		input->move.move_left = 1;
	else if (keycode == KEY_RIGHT || keycode == D)
		input->move.move_right = 1;
	return (0);
}


int 	ft_release(int keycode, t_input *input)
{
	if (keycode == KEY_DOWN || keycode == Z)
		input->move.move_backward = 0;
	else if (keycode == KEY_UP || keycode == W)
		input->move.move_forward = 0;
	else if (keycode == KEY_LEFT || keycode == A)
		input->move.move_left = 0;
	else if (keycode == KEY_RIGHT || keycode == D)
		input->move.move_right = 0;
	return (0);
}

int 	ft_process_movement(t_input *input)
{
	if (input->move.move_backward == 1)
		ft_move_backward(input);
	if (input->move.move_forward == 1)
		ft_move_forward(input);
	if (input->move.move_left == 1)
		ft_move_left(input);
	if (input->move.move_right == 1)
		ft_move_right(input);
	if (input->move.move_backward == 1 || input->move.move_forward == 1
	|| input->move.move_left == 1 || input->move.move_right == 1)
		ft_calculate_ray(input);
	return (0);	
}