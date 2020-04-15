/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cub3d.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 11:24:46 by qli           #+#    #+#                 */
/*   Updated: 2020/04/15 17:26:26 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
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
** ---------------------------KEY-------------------------------------------
** These values identify characters or functions associated with each key
** changed left and right
*/

#define KEY_UP							65362
#define KEY_LEFT						65361
#define KEY_RIGHT						65363
#define KEY_DOWN						65364
#define ESC								65307
#define W								119
#define A								97
#define D								100
#define Z								122
#define KEY_PRESS						2
#define KEY_RELEASE						3

/*
** ---------------------------COLOR-------------------------------------------
*/

#define RED 							0x00FF0000
#define GREEN 							0x0000FF00
#define BLUE 							0x000099ff
#define ORANGE 							0x00ff9900
#define DARK_GREEN 						0x00009933
#define DARK_PINK 						0x00cc3399
#define WHITE							0x00FFFFFF
#define BLACK							0x00000000
#define GRAY							0x00808080
#define DARK_GRAY						0x00191919
#define ALICE_BLUE						0x00f0f8ff

#define CEILLING_COLOR					ALICE_BLUE
#define WALL_COLOR						BLUE
#define FLOOR_COLOR						BLACK
/*
** ---------------------------MOVEMENT-------------------------------------------
*/
#define MOVE_SPEED						0.005
#define ROTATE_SPEED					0.0025

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
	void 			*mlx;
	void 			*mlx_win;
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
** -----------------------------MOVEMENT-----------------------------------
*/

typedef struct 		s_movement
{
	int 			move_forward;
	int 			move_backward;
	int 			move_right;
	int 			move_left;
}					t_movement;

/*
** -----------------------------WALL TEXTURE-----------------------------------
*/

typedef struct 		s_wall_texture
{
	int 			texture_res_x;
	int				texture_res_y;
}					t_wall_texture;


/*
** -----------------------------INPUT STRUCT-----------------------------------
*/
typedef struct 		s_input
{
	t_ray_casting 	ray_casting;
	t_mlx		 	img;
	t_dda 			dda;
	t_rgb 			color;
	t_movement 		move;
	t_wall_texture 	wall;
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
void 				ft_step_direction(t_input *input);
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
** ---------------------------MLX & MOVEMENT---------------------------------
*/

void 				ft_initiate_window(t_input *input);
void				my_mlx_pixel_put(t_mlx *img, int x, int y, int color);
int 				ft_key_movement(int keycode, t_input *input);
int 				ft_release(int keycode, t_input *input);
int 				ft_process_movement(t_input *input);
int 				ft_move_forward(t_input *input);
int					ft_move_backward(t_input *input);
int 				ft_move_right(t_input *input);
int 				ft_move_left(t_input *input);
int 				ft_close(int keycode, t_input *input);
int 				ft_render_next_frame(t_input *input);
#endif
