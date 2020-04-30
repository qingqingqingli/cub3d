/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_height.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 11:52:52 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 21:23:40 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	ft_calculate_height(char **array)
{
	int height;

	height = 0;
	while (array[height])
		height++;
	return (height);
}
