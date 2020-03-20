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

void 	ft_print_2d_array(t_input *input)
{
	int i;

	i = 0;
	while (input->array[i])
	{
		printf("%s\n", input->array[i]);
		i++;
	}
}

void	ft_print_input(t_input input)
{
	printf("r_present is %d\n", input.r_present);
	printf("input.xsize is %d\n", input.r_xsize);
	printf("input.ysize is %d\n", input.r_ysize);
	printf("input.north_present is %d\n", input.north_present);
	printf("input.north_path is %s\n", input.north_path);
	printf("input.south_present is %d\n", input.south_present);
	printf("input.south_path is %s\n", input.south_path);
	printf("input.west_present is %d\n", input.west_present);
	printf("input.west_path is %s\n", input.west_path);
	printf("input.east_present is %d\n", input.east_present);
	printf("input.east_path is %s\n", input.east_path);
	printf("input.sprite_present is %d\n", input.sprite_present);
	printf("input.sprite_path is %s\n", input.sprite_path);
	printf("input.floor_present is %d\n", input.floor_present);
	printf("input.floor_r is %d\n", input.floor_r);
	printf("input.floor_g is %d\n", input.floor_g);
	printf("input.floor_b is %d\n", input.floor_b);
	printf("input.ceilling_present is %d\n", input.ceilling_present);
	printf("input.ceilling_r is %d\n", input.ceilling_r);
	printf("input.ceilling_g is %d\n", input.ceilling_g);
	printf("input.ceilling_b is %d\n", input.ceilling_b);
	// printf("%s\n", input.line);
	ft_print_2d_array(&input);
}
