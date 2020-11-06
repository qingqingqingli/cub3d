/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/04 11:03:04 by qli           #+#    #+#                 */
/*   Updated: 2020/04/29 18:22:27 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# include <stdlib.h>
# include <unistd.h>

int		get_next_line(int fd, char **line);
size_t	ft_strlen_1(const char *s);
char	*ft_strdup_1(const char *s1);
char	*ft_strjoin_1(char *s1, char *s2);
size_t	ft_char_find(char *s, char c);
int		ft_check_line(char *container);

#endif
