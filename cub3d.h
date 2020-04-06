/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cub3d.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 11:24:46 by qli           #+#    #+#                 */
/*   Updated: 2020/04/06 17:13:05 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include "minilibx-master/mlx.h"

/*
** ---------------------------SHORT NAMES-------------------------------------------
*/

#define position_y input->ray_casting.pos_y
#define position_x input->ray_casting.pos_x
#define direction_x input->ray_casting.dir_x
#define direction_y input->ray_casting.dir_y
#define direction input->ray_casting.sprawing_dir
#define plane_dir_x input->ray_casting.plane_x
#define plane_dir_y input->ray_casting.plane_y
#define camera_x_pos input->ray_casting.camera_x
#define res_width input->r_xsize
#define res_height input->r_ysize
#define ray_dir_x input->ray_casting.ray_direction_x
#define ray_dir_y input->ray_casting.ray_direction_y

/*
** ---------------------------STRUCT-------------------------------------------
*/

typedef struct	s_windows_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}               t_windows_data;

/*
** -----------------------------RAY CASTING STRUCT-----------------------------------
*/

typedef struct s_ray_casting
{
	int 	pos_x;
	int 	pos_y;
	char 	sprawing_dir;
	double 	dir_x;
	double 	dir_y;
	double 	plane_x;
	double 	plane_y;
	double	ray_direction_x;
	double 	ray_direction_y;
	double 	camera_x;
	double 	current_time;
	double 	old_time;
}			t_ray_casting;

/*
** -----------------------------INPUT STRUCT-----------------------------------
*/
typedef struct 	s_input
{
	t_ray_casting ray_casting;
	t_windows_data img;
	int		r_present;
	int		r_xsize;
	int		r_ysize;
	int		north_present;
	char	*north_path;
	int		south_present;
	char	*south_path;
	int		west_present;
	char	*west_path;
	int		east_present;
	char	*east_path;
	int		sprite_present;
	char	*sprite_path;
	int		floor_present;
	int		floor_r;
	int		floor_g;
	int		floor_b;
	int		ceilling_present;
	int		ceilling_r;
	int		ceilling_g;
	int		ceilling_b;
	char	*line;
	char 	**array;
	unsigned int 	flood_fill_x;
	unsigned int 	flood_fill_y;
}				t_input;

/*
** ---------------------------FUNCTIONS----------------------------------------
*/

int				get_next_line(int fd, char **line);
void			ft_putstr_fd(char *s, int fd);
int				ft_return_error(char *s);
int				ft_atoi(const char *str);
int				ft_isspace(int c);
int				ft_isdigit(int c);
int				ft_char_range(int c);
void			ft_print_input(t_input input);
int				ft_parse_input(char *line, t_input *input);
int				ft_check_element(t_input input);
int				ft_validate_element(t_input input);
int 			ft_check_map(char *line);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *s1);
int				ft_process_map_line(char *line, t_input *input);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
char			**ft_split(char const *s, char c);
int 			ft_validate_map(t_input *input);
int 			ft_cast_ray(t_input *input);
int 			ft_check_sprawning_pos(char c, t_input *input);
int 			ft_calculate_ray(t_input *input);

#endif
