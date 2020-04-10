/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cub3d.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 11:24:46 by qli           #+#    #+#                 */
/*   Updated: 2020/04/10 14:42:07 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>
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
#define ray_dir_x input->ray_casting.ray_direction_x
#define ray_dir_y input->ray_casting.ray_direction_y
#define delta_len_x input->dda.delta_dis_x
#define delta_len_y input->dda.delta_dis_y

/*
** ---------------------------COLOR-------------------------------------------
*/

#define RED 0x00FF0000
#define GREEN 0x0000FF00
#define BLUE 0x000099ff
#define ORANGE 0x00ff9900
#define DARK_GREEN 0x00009933
#define DARK_PINK 0x00cc3399


/*
** ---------------------------COLORS-------------------------------------------
*/

typedef struct 		s_rgb
{
	int				red;
	int 			green;
	int 			blue;
	int 			wall;
	int 			ceilling;
	int 			floor;
	int 			reserve;
}					t_rgb;

/*
** ---------------------------STRUCT-------------------------------------------
*/

typedef struct		s_mlx
{
	void			*img;
	char			*addr;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
}           	    t_mlx;

/*
** -----------------------------RAY CASTING STRUCT-----------------------------------
*/

typedef struct 		s_ray_casting
{
	double 			pos_x;
	double 			pos_y;
	char 			sprawing_dir;
	double 			dir_x;
	double 			dir_y;
	double 			plane_x;
	double 			plane_y;
	double			ray_direction_x;
	double 			ray_direction_y;
	double 			camera_x;
	time_t 			current_time;
	time_t 			old_time;
}					t_ray_casting;

/*
** -----------------------------DDA(Dynamic Distance Algorithm)-------------------
*/

typedef struct 		s_dda
{
	int 			map_x;
	int 			map_y;
	double 			side_dis_x;
	double 			side_dis_y;
	double			delta_dis_x;
	double			delta_dis_y;
	int 			step_x;
	int 			step_y;
	int 			side;
	double 			ray_len;
	int 			line_height;
	int 			draw_start;
	int 			draw_end;
}					t_dda;

/*
** -----------------------------INPUT STRUCT-----------------------------------
*/
typedef struct 		s_input
{
	t_ray_casting 	ray_casting;
	t_mlx		 	img;
	t_dda 			dda;
	t_rgb 			color;
	int				res_present;
	int				res_x;
	int				res_y;
	int				north_present;
	char			*north_path;
	int				south_present;
	char			*south_path;
	int				west_present;
	char			*west_path;
	int				east_present;
	char			*east_path;
	int				sprite_present;
	char			*sprite_path;
	int				floor_present;
	int				floor_r;
	int				floor_g;
	int				floor_b;
	int				ceilling_present;
	int				ceilling_r;
	int				ceilling_g;
	int				ceilling_b;
	char			*line;
	char 			**array;
	unsigned int 	flood_fill_x;
	unsigned int 	flood_fill_y;
}					t_input;

/*
** ---------------------------FUNCTIONS----------------------------------------
*/

int					get_next_line(int fd, char **line);
void				ft_putstr_fd(char *s, int fd);
int					ft_return_error(char *s);
int					ft_atoi(const char *str);
int					ft_isspace(int c);
int					ft_isdigit(int c);
int					ft_char_range(int c);
void				ft_print_input(t_input input);
int					ft_parse_input(char *line, t_input *input);
int					ft_check_element(t_input input);
int					ft_validate_element(t_input input);
int 				ft_check_map(char *line);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
int					ft_process_map_line(char *line, t_input *input);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				**ft_split(char const *s, char c);
int 				ft_validate_map(t_input *input);
int 				ft_cast_ray(t_input *input);
int 				ft_check_sprawning_pos(char c, t_input *input);
int 				ft_calculate_ray(t_input *input);
int 				ft_dda(t_input *input);
void				ft_reset_input(t_input *input);
int 				ft_draw_line(t_input *input);
int					create_rgb(int r, int g, int b);
int					get_r(int rgb);
int					get_g(int rgb);
int					get_b(int rgb);
int					ft_put_color(t_input *input, int x);
int 				ft_check_position(int c);

/*
** ---------------------------CALCULATIONS----------------------------------------
*/

int 				ft_set_player_position(t_input *input);
void 				ft_set_player_orientation(t_input *input);
void				ft_set_plane_orientation(t_input *input);
void 				ft_calculate_camera(t_input *input, int x);
void 				ft_calculate_ray_dir(t_input *input);
void 				ft_map_location(t_input *input);
void 				ft_calculate_delta(t_input *input);
void 				ft_calculate_side_dist(t_input *input);
void 				ft_calculate_ray_len(t_input *input);
void 				ft_calculate_line_height(t_input *input);
void 				ft_calculate_draw_start(t_input *input);
void 				ft_calculate_draw_end(t_input *input);
void 				ft_perform_dda(t_input *input);

/*
** ---------------------------COLORS----------------------------------------
*/

void 				ft_choose_color(t_input *input);
void 				ft_put_color_ceilling(t_input *input, int x);
void 				ft_put_color_wall(t_input *input, int x);
void 				ft_put_color_floor(t_input *input, int x);

/*
** ---------------------------MLX----------------------------------------
*/

void				my_mlx_pixel_put(t_mlx *img, int x, int y, int color);


#endif
