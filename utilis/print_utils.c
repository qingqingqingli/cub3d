/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_utils.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 16:21:21 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 21:17:02 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void		ft_print_2d_array(char **array)
{
	int i;

	i = 0;
	printf("111\n");
	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		printf("222\n");
		i++;
	}
}
