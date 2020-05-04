/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validate_input.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/30 15:34:53 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 10:26:13 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

static int		ft_validate_file_type(char *name, int i)
{
	int correct;

	correct = -1;
	while (name[i] != '\0')
	{
		if (name[i] == '.' && name[i + 1] != '\0')
		{
			i++;
			if (name[i] == 'c' && name[i + 1] != '\0')
			{
				i++;
				if (name[i] == 'u' && name[i + 1] != '\0')
				{
					i++;
					if (name[i] == 'b')
					{
						i++;
						correct = 1;
					}
				}
			}
		}
		i++;
	}
	return (correct);
}

int				ft_validate_file_input(int argc, char **argv, t_input *input)
{
	if (argc < 2)
		return (ft_return_error("Error\nNo map description\n", input));
	if (argc == 2 || argc == 3)
	{
		if (ft_validate_file_type(argv[1], 0) == -1)
			(ft_return_error("Error\nWrong file name\n", input));
	}
	if (argc == 3)
	{
		if (ft_strncmp(argv[2], "--save", 7) == 0)
			input->bmp_needed = 1;
		else
			(ft_return_error("Error\nWrong save argument\n", input));
	}
	if (argc > 3)
		return (ft_return_error("Error\nToo many arguments\n", input));
	return (0);
}
