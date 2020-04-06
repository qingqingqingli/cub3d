/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cub3d.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 11:24:46 by qli            #+#    #+#                */
/*   Updated: 2020/03/11 14:14:26 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		create_trgb(int t, int r, int g, int b)
{
	return(b << 24 | g << 16 | r << 8 | t);
}

int		get_t(int trgb)
{
	return (trgb & 0xFF);
}

int		get_r(int trgb)
{
	return ((trgb >> 8) & 0xFF);
}

int		get_g(int trgb)
{
	return ((trgb >> 16) & 0xFF);
}

int		get_b(int trgb)
{
	return ((trgb >> 24) & 0xFF);
}

int		main(void)
{
	int t = 100;
	int r = 10;
	int g = 10;
	int b = 10;
	int trgb = 0;

	trgb = create_trgb(t, r, g, b);
	printf("transparency is %d\n", get_t(trgb));
	printf("red is %d\n", get_r(trgb));
	printf("green is %d\n", get_g(trgb));
	printf("blue is %d\n", get_b(trgb));
	return (0);
}
