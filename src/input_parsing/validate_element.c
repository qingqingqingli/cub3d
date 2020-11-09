/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validate_element.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/03 18:35:31 by qli           #+#    #+#                 */
/*   Updated: 2020/11/09 10:58:43 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

// //MacOS
// int		ft_reset_resolution(t_input *input)
// {
// 	mlx_get_screen_size(input->img.mlx, &input->res_x_present,
// 	&input->res_y_present);
// 	if (input->res_x_present <= 0 || input->res_y_present <= 0)
// 		return (ft_return_error("Error\nMlx screen size error\n", input));
// 	if (input->res_present == 1 && input->bmp_needed == 0)
// 	{
// 		if (input->res_x > input->res_x_present || input->res_x < 0)
// 			input->res_x = input->res_x_present;
// 		if (input->res_y > input->res_y_present || input->res_y < 0)
// 			input->res_y = input->res_y_present;
// 	}
// 	return (0);
// }

//Linux
void	ft_reset_resolution(t_input *input)
{
	input->res_x_present = 800;
	input->res_y_present = 800;
	if (input->res_present == 1)
	{
		if (input->res_x > input->res_x_present || input->res_x < 0)
			input->res_x = input->res_x_present;
		if (input->res_y > input->res_y_present || input->res_y < 0)
			input->res_y = input->res_y_present;
	}
}

int		ft_check_element_complete(t_input *input)
{
	if (input->res_present == 1 && input->north_present == 1
	&& input->south_present == 1 && input->west_present == 1
	&& input->east_present == 1 && input->sprite_present == 1
	&& input->floor_present == 1 && input->ceilling_present == 1)
		return (1);
	return (-1);
}

int		ft_check_color_range(t_input *input)
{
	if (input->floor_r >= 0 && input->floor_r <= 255
	&& input->floor_g >= 0 && input->floor_g <= 255
	&& input->floor_b >= 0 && input->floor_b <= 255
	&& input->ceilling_r >= 0 && input->ceilling_r <= 255
	&& input->ceilling_g >= 0 && input->ceilling_g <= 255
	&& input->ceilling_b >= 0 && input->ceilling_b <= 255)
		return (1);
	return (-1);
}

int		ft_check_res_range(t_input *input)
{
	if (input->res_x == 0 || input->res_y == 0)
		return (-1);
	return (0);
}

int		ft_validate_element(t_input *input)
{
	if (ft_check_element_complete(input) == -1)
		return (-1);
	if (ft_check_res_range(input) == -1)
		return (-1);
	if (ft_check_color_range(input) == -1)
		return (-1);
	if (input->bmp_needed != 1)
		ft_reset_resolution(input);
	return (0);
}
