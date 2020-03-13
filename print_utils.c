/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_utils.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/10 16:21:21 by qli            #+#    #+#                */
/*   Updated: 2020/03/11 14:16:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_print_input(t_input input)
{
	printf("input.r is %d\n", input.r_present);
	printf("input.xsize is %d\n", input.r_xsize);
	printf("input.ysize is %d\n", input.r_ysize);
}
