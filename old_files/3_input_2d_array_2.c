/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parse.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/11 13:47:27 by qli            #+#    #+#                */
/*   Updated: 2020/03/11 14:24:29 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int 	ft_check_map(char *line)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (line[i] != '\0' && count <= 1)
	{
		if (line[i] == '0' || line[i] == '1' || line[i] == '2'
		|| ft_isspace(line[i]) == 1 || line[i] == '\n')
			i++;
		else if (line[i] == 'N' || line[i] == 'S' || line[i] == 'W'
		|| line[i] == 'E')
		{
			count++;
			i++;
		}
		else
			return(-1);
	}
	if (count >= 2)
		return (-1);
	return (1);
}

int 	ft_check_spaces_nextline(char *line)
{
	int i;

	i = 0;
	while (line[i] != '\0')
	{
		if (ft_isspace(line[i]) == 1 || line[i] == '\n')
			i++;
		else
			return (0);
	}
	return (1);
}

char 	**ft_duplicate_array(char **new_array, char **old_array, int row)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (i < row)
	{
		len = ft_strlen(old_array[i]);
		new_array[i] = (char *)malloc((len + 1) * sizeof(char));
		while (j < len && old_array[i][j] != '\0')
		{
			new_array[i][j] = old_array[i][j];
			j++;
		}
		i++;
	}
	return (new_array);
}

int		ft_create_2d_array(char *line, t_input *input)
{
	int row;
	char **new_array;
	int i;

	i = 0;
	row = 0;
	/* check how many rows are there in the input->array */
	while (input->array[row])
		row++;
	/* malloc the rows needed for the new array */
	new_array = (char **)malloc((row + 1) * sizeof(char *));
	/* duplicate all lines from the old array to the new array */
	new_array = ft_duplicate_array(new_array, input->array, row);
	/* for the one new line, duplicate the line to the new array*/
	new_array[row] = ft_strdup(line);
	while (new_array[row])
		row++;
	printf("new array row is %d\n", row);
	/* allocate and free the old array */
	while (i < row)
	{
		printf("new_array[%d] is %s\n", i, new_array[i]);
		i++;
	}
	// input->array = new_array;
	// printf("input->array[row] is %s\n", input->array[row]);
	return(0);
}

int		ft_process_map_line(char *line, t_input *input)
{
	if (ft_check_map(line) == 1 && ft_check_spaces_nextline(line) != 1)
		ft_create_2d_array(line, input);
	else if (ft_check_map(line) != -1 && ft_check_spaces_nextline(line) != 1)
		return (ft_return_error("Invalid map input\n"));
	return (0);
}
