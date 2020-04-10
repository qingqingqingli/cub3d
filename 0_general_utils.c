/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   0_general_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:24:27 by qli           #+#    #+#                 */
/*   Updated: 2020/04/09 19:34:58 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_return_error(char *s)
{
	ft_putstr_fd(s, 1);
	return (-1);
}

int		ft_isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int 	ft_check_position(int c)
{
	if (c == 'N' || c == 'S'|| c == 'W' || c == 'E')
		return (1);
	return (0);
}

int		ft_char_range(int c)
{
	if (c == 'R' || c == 'N' || c == 'S'|| c == 'W'
	|| c == 'E' || c == 'F' || c == 'C')
		return (1);
	return (0);
}

int		ft_check_element(t_input input)
{
	if (input.res_present == 1 && input.north_present == 1
	&& input.south_present == 1 && input.west_present == 1
	&& input.east_present == 1 && input.sprite_present == 1
	&& input.floor_present == 1 && input.ceilling_present == 1)
		return (1);
	return (0);
}

int		ft_validate_element(t_input input)
{
	if (input.res_x > 0 && input.res_y > 0
	&& input.floor_r >= 0 && input.floor_r <= 255
	&& input.floor_g >= 0 && input.floor_g <= 255
	&& input.floor_b >= 0 && input.floor_b <= 255
	&& input.ceilling_r >= 0 && input.ceilling_r <= 255
	&& input.ceilling_g >= 0 && input.ceilling_g <= 255
	&& input.ceilling_b >= 0 && input.ceilling_b <= 255)
		return (1);
	return (0);
}

int 	ft_check_sprawning_pos(char c, t_input *input)
{
	if (c == 'N')
	{
		input->ray_casting.sprawing_dir = 'N';
		return (1);
	}
	else if (c == 'S')
	{
		input->ray_casting.sprawing_dir = 'S';
		return (1);
	}
	else if (c == 'W')
	{
		input->ray_casting.sprawing_dir = 'W';
		return (1);
	}	
	else if (c == 'E')
	{
		input->ray_casting.sprawing_dir = 'E';
		return (1);
	}	
	return (0);
}
