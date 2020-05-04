/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_management.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/29 15:56:25 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

void	ft_free_malloc(t_input *input)
{
	if (input->sprite_data.buffer_present == 1)
		free(input->sprite_data.buffer);
	if (input->sprite_data.pos_present == 1)
		free(input->sprite_data.pos);
	printf("freed all malloc\n");
}

int		ft_return_error(char *s, t_input *input)
{
	ft_putstr_fd(s, 2);
	ft_free_malloc(input);
	exit(0);
}
