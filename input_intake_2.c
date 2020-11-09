/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_intake_2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 13:47:27 by qli           #+#    #+#                 */
/*   Updated: 2020/05/06 08:12:57 by qli           ########   odam.nl         */
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
		else
			input->cub_line_present = 1;
	}
	else
		ft_lines_join_cub(line, input, 0, 0);
	return (0);
}

int		ft_read_line(int fd, t_input *input)
{
	int		output;
	char	*line;

	output = 1;
	while (output == 1)
	{
		output = get_next_line(fd, &line);
		if (output < 0)
			return (ft_return_error("Error\nRead input error\n", input));
		ft_create_cub_array(line, input);
		free(line);
	}
	input->cub_array = ft_split_2(input->cub_line, '\n');
	if (!input->cub_array)
		return (ft_return_error("Error\nRead input error\n", input));
	else
		input->cub_array_present = 1;
	return (0);
}

int		ft_input_intake(char **argv, t_input *input)
{
	int		fd;
	int		output;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_return_error("Error\nOpen input error\n", input));
	ft_read_line(fd, input);
	output = close(fd);
	if (output == -1)
		return (ft_return_error("Error\nClose file error\n", input));
	return (0);
}
