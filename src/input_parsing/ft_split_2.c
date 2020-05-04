/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_2.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 12:47:40 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 12:03:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d.h"

static void		ft_malloc_free(char **dst, int n)
{
	while (n > 0)
	{
		n--;
		free(dst[n]);
	}
	free(dst);
}

static size_t	ft_word_amount(char const *s, char c)
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

static char		*ft_word_create(char const *s, char c, size_t *i)
{
	char	*word;
	size_t	local_i;
	size_t	len;

	local_i = *i;
	len = 0;
	while (s[local_i] != '\0' && s[local_i] != c)
	{
		local_i++;
		len++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	local_i = 0;
	while (s[*i] != '\0' && s[*i] != c)
	{
		word[local_i] = s[*i];
		local_i++;
		*i = *i + 1;
	}
	word[local_i] = '\0';
	return (word);
}

static int		ft_array_create(char **dst, char const *s, char c, size_t i)
{
	size_t	n;

	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			dst[n] = ft_word_create(s, c, &i);
			if (!dst[n])
			{
				ft_malloc_free(dst, n);
				return (-1);
			}
			n++;
			i++;
		}
		while (s[i] == c)
		{
			dst[n] = ft_strdup_2("\n");
			n++;
			i++;
		}
	}
	dst[n] = NULL;
	return (0);
}

char			**ft_split_2(char const *s, char c)
{
	char	**dst;
	size_t	word_amount;

	if (!s)
		return (0);
	word_amount = ft_word_amount(s, c);
	dst = (char **)malloc(sizeof(char *) * (word_amount + 1));
	if (dst == 0)
		return (0);
	if (ft_array_create(dst, s, c, 0) == -1)
		return (0);
	return (dst);
}
