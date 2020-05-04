/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_intake_2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 13:47:27 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 15:19:20 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_create_cub_array(char *line, t_input *input)
{
	if (ft_strncmp(input->cub_line, "null", 6) == 0)
	{
		input->cub_line = ft_strdup(line);
		if (ft_strncmp(input->cub_line, "null", 6) == 0)
			return (ft_return_error("Error\nStrdup error\n", input));
	}
	else
		ft_lines_join_cub(line, input, 0, 0);
	return (0);
}

int		ft_input_intake(char **argv, t_input *input)
{
	int		fd;
	char	*line;
	int		output;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_return_error("Error\nOpen file error\n", input));
	output = get_next_line(fd, &line);
	if (output < 0)
		return (ft_return_error("Error\nRead line error\n", input));
	if (!line)
		return (ft_return_error("Error\nRead line error\n", input));
	while (output > 0)
	{
		ft_create_cub_array(line, input);
		output = get_next_line(fd, &line);
		if (output < 0)
			return (ft_return_error("Error\nRead line error\n", input));
	}
	if (output == 0 && ft_validate_map_line(line) == 1)
		ft_create_cub_array(line, input);
	input->cub_array = ft_split_2(input->cub_line, '\n');
	return (0);
}
