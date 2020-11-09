/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_3.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 10:29:57 by qli           #+#    #+#                 */
/*   Updated: 2020/05/06 10:31:07 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

size_t	ft_word_amount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}
