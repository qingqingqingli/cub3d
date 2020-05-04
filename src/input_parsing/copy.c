int		ft_parse_n(t_input *input, int line, int *i)
{
	int count;

	count = 0;
	if (input->north_present == 1)
		return (ft_return_error("Error\nInvalid element input\n", input));
	if (input->cub_array[line][*i] == 'N' &&
	input->cub_array[line][*i + 1] == 'O' &&
	ft_isspace(input->cub_array[line][*i + 2]) == 1)
	{
		input->north_present = 1;
		*i = *i + 2;
		while (input->cub_array[line][*i] != '\0' &&
		ft_isspace(input->cub_array[line][*i]) == 1)
			*i = *i + 1;
	}
	else
		return (ft_return_error("Error\nInvalid element input\n", input));
	while (input->north_present == 1 && *i > 0)
	{
		input->cub_array[line] = input->cub_array[line] + 1;
		*i = *i - 1;
		count++;
	}
	if (input->north_present == 1)
		input->north_path = input->cub_array[line];
	while (count > 0)
	{
		input->cub_array[line] = input->cub_array[line] - 1;
		count--;
	}
	return (0);
}