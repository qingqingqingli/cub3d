/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:24:27 by qli            #+#    #+#                */
/*   Updated: 2020/03/10 14:57:02 by qli           ########   odam.nl         */
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

int		ft_char_range(int c)
{
	if (c == 'R' || c == 'N' || c == 'S'|| c == 'W'
	|| c == 'E' || c == 'F' || c == 'C')
		return (1);
	return (0);
}

int		ft_check_element(t_input input)
{
	if (input.r_present == 1 && input.north_present == 1
	&& input.south_present == 1 && input.west_present == 1
	&& input.east_present == 1 && input.sprite_present == 1
	&& input.floor_present == 1 && input.ceilling_present == 1)
		return (1);
	return (0);
}

int		ft_validate_element(t_input input)
{
	if (input.r_xsize > 0 && input.r_ysize > 0
	&& input.floor_r >= 0 && input.floor_r <= 255
	&& input.floor_g >= 0 && input.floor_g <= 255
	&& input.floor_b >= 0 && input.floor_b <= 255
	&& input.ceilling_r >= 0 && input.ceilling_r <= 255
	&& input.ceilling_g >= 0 && input.ceilling_g <= 255
	&& input.ceilling_b >= 0 && input.ceilling_b <= 255)
		return (1);
	return (0);
}
