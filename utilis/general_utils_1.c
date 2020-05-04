/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   general_utils_1.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 14:24:27 by qli           #+#    #+#                 */
<<<<<<< HEAD
/*   Updated: 2020/05/03 20:10:14 by qli           ########   odam.nl         */
=======
/*   Updated: 2020/05/03 18:39:20 by qli           ########   odam.nl         */
>>>>>>> dda
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_check_sprawning_pos(char c, t_input *input)
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
