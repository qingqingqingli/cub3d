/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_read_file.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/29 16:01:51 by qli           #+#    #+#                 */
/*   Updated: 2020/04/30 15:39:08 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int		ft_read_file(char **argv, t_input *input)
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
	while (output == 1)
	{
		if (!line)
			return (ft_return_error("Error\nRead line error\n", input));
		ft_parse_input(line, input);
		output = get_next_line(fd, &line);
		if (output < 0)
			return (ft_return_error("Error\nRead line error\n", input));
	}
	return (0);
}
