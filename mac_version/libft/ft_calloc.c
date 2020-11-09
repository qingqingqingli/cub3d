/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 12:46:29 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:23:29 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*dst;

	i = 0;
	dst = malloc(count * size);
	if (dst == 0)
		return (0);
	while (i < count * size)
	{
		((char *)dst)[i] = 0;
		i++;
	}
	return (dst);
}
