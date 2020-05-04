/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   general_utils_2.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/29 18:56:44 by qli           #+#    #+#                 */
/*   Updated: 2020/05/03 16:39:35 by qli           ########   odam.nl         */
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

int		ft_check_map_line(char *line)
{
	int i;

	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] == '1' || line[i] == ' ' || line[i] == '0'
		|| line[i] == 'N' || line[i] == 'S' || line[i] == 'W'
		|| line[i] == 'E' || line[i] == '2')
			i++;
		else
			return (-1);
	}
	return (1);
}
