/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lines_join.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/03 17:19:37 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

int		ft_lines_join(char *line, t_input *input, int i1, int i2)
{
	char	*new_line;

	new_line = (char *)malloc((ft_strlen(input->line) + ft_strlen(line)
	+ 2) * sizeof(char));
	if (new_line == NULL)
		return (ft_return_error("Error\nMalloc error\n", input));
	while (input->line[i1] != '\0')
	{
		new_line[i1] = input->line[i1];
		i1++;
	}
	new_line[i1] = '\n';
	i1++;
	while (line[i2] != '\0')
	{
		new_line[i1 + i2] = line[i2];
		i2++;
	}
	new_line[i1 + i2] = '\0';
	input->line = ft_strdup(new_line);
	free(new_line);
	return (0);
}

int		ft_lines_join_cub(char *line, t_input *input, int i1, int i2)
{
	char	*new_line;

	new_line = (char *)malloc((ft_strlen(input->cub_line) + ft_strlen(line)
	+ 2) * sizeof(char));
	if (new_line == NULL)
		return (ft_return_error("Error\nMalloc error\n", input));
	while (input->cub_line[i1] != '\0')
	{
		new_line[i1] = input->cub_line[i1];
		i1++;
	}
	new_line[i1] = '\n';
	i1++;
	while (line[i2] != '\0')
	{
		new_line[i1 + i2] = line[i2];
		i2++;
	}
	new_line[i1 + i2] = '\0';
	input->cub_line = ft_strdup(new_line);
	if (ft_strncmp(input->cub_line, "null", 6) == 0)
		return (ft_return_error("Error\nStrdup error\n", input));
	free(new_line);
	return (0);
}
