/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validate_info.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/30 15:34:53 by qli           #+#    #+#                 */
/*   Updated: 2020/04/30 15:43:48 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

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
