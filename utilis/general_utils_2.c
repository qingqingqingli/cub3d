/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   general_utils_2.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/29 18:56:44 by qli           #+#    #+#                 */
/*   Updated: 2020/04/30 18:34:43 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int		ft_check_position(int c)
{
	if (c == 'N' || c == 'S' || c == 'W' || c == 'E')
		return (1);
	return (0);
}

int		ft_char_range(int c)
{
	if (c == 'R' || c == 'N' || c == 'S' || c == 'W'
	|| c == 'E' || c == 'F' || c == 'C')
		return (1);
	return (0);
}

int		ft_check_next_line(int c)
{
	if (c == '\n')
		return (1);
	return (0);
}
