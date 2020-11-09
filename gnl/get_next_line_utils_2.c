/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils_2.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/06 15:02:06 by qli           #+#    #+#                 */
/*   Updated: 2020/05/06 15:03:15 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
**	count the len of a string
*/

size_t		ft_strlen_1(const char *s)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

int			ft_read_res(int *res, int fd, char *buf)
{
	*res = read(fd, buf, BUFFER_SIZE);
	if (*res > 0)
		buf[*res] = '\0';
	if (*res == 0)
		return (0);
	return (1);
}
