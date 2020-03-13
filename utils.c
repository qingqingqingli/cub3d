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
