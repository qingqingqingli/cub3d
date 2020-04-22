/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calculate_height.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/22 11:52:52 by qli           #+#    #+#                 */
/*   Updated: 2020/04/22 13:27:21 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "/home/qli/codam/cub3d/cub3d.h"

unsigned int ft_calculate_height(char **array)
{
	unsigned int height;

	height = 0;
	while (array[height])
		height++;
	return (height);
}