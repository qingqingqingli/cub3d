/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cub3d.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 11:24:46 by qli           #+#    #+#                 */
/*   Updated: 2020/04/27 19:57:24 by qli           ########   odam.nl         */
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
#define MOVE_SPEED						0.15
#define ROTATE_SPEED					0.15

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
** ---------------------------MLX STRUCT-------------------------------------------
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
	int 			texture_height;
	int				texture_width;
}           	    t_mlx;

typedef struct		s_mlx_2
{
	void			*img;
	int				*addr;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
	int 			texture_height;
	int				texture_width;
}           	    t_mlx_2;

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
	int 			texture_height;
	int				texture_width;
	int  			texture_number;
	double 			texture_wall_x;
	int 			texture_x;
	double 			texture_step;
	double 			texture_start_pos;
	int 			texture_y;
	int 			wall_color;
	int				line_length;
	int 			img_active;
}					t_wall_texture;

/*
** -----------------------------SPRITE DISTANCE-----------------------------------
*/

typedef struct 		s_sprite_pos
{
	double 			distance;
	double 			x;
	double 			y;
}					t_sprite_pos;


/*
** -----------------------------SPRITE TEXTURE-----------------------------------
*/

typedef struct 		s_sprites_data
{
	double 			*buffer;
	int 			*sprite_order;
	double 			*sprite_distance;
	int 			sprite_number;
	t_sprite_pos 	*pos;
	double 			sprite_x;
	double 			sprite_y;
	double 			inverse_camera;
	double 			transform_x;
	double 			transform_y;
	int 			sprite_screen_x;
	int				sprite_height;
	int 			sprite_width;
	int 			draw_start_x;
	int 			draw_end_x;
	int 			draw_start_y;
	int 			draw_end_y;
	int 			sprite_color;
	int 			texture_x;
	int 			texture_y;
	int 			stripe;
}					t_sprites_data;


/*
** -----------------------------INPUT STRUCT-----------------------------------
*/
typedef struct 		s_input
{
	t_ray_casting 	ray_casting;
	t_mlx		 	img;
	t_mlx		 	img_2;
	t_mlx_2		 	north;
	t_mlx_2		 	south;
	t_mlx_2		 	east;
	t_mlx_2		 	west;
	t_mlx_2		 	sprite;
	t_dda 			dda;
	t_rgb 			color;
	t_movement 		move;
	t_wall_texture 	wall;
	t_sprites_data 	sprite_data;
	int				res_present;
	int				res_x;
	int				res_y;
	int 			orientation;
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
	char 			**array_copy;
	unsigned int 	flood_fill_x;
	unsigned int 	flood_fill_y;
	int 			ceilling_color;
	int 			floor_color;
}					t_input;

/*
** ---------------------------FUNCTIONS----------------------------------------
*/

int					get_next_line(int fd, char **line);
void				ft_putstr_fd(char *s, int fd);
int					ft_return_error(char *s, t_input *input);
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
void 				ft_free_malloc(t_input *input);

/*
** ---------------------------FLOOD FILL----------------------------------------
*/
int 				ft_duplicate_array(t_input *input);
unsigned int 		ft_calculate_height(char **array);
int 				ft_check_border(t_input *input);
void 				ft_flood_fill(t_input *input, unsigned int x, unsigned int y,
					unsigned int height);
int 				ft_find_player_position(t_input *input);

/*
** ---------------------------CALCULATIONS----------------------------------------
*/

void 				ft_set_player_position(t_input *input);
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
void 				ft_put_color_floor(t_input *input, int x);
void 				ft_set_color(t_input *input);
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
void 				ft_close(int keycode, t_input *input);
int 				ft_render_next_frame(t_input *input);
void 				ft_initiate_img_2(t_input *input);
void 				ft_render_img(t_input *input, int x, int y, int color);
void 				ft_display_img(t_input *input);

/*
** ---------------------------WALL---------------------------------
*/

void 				ft_calculate_texture_num(t_input *input);
int 				ft_render_wall(t_input *input, int x);
void 				ft_calculate_wall_x(t_input *input);
void 				ft_calculate_texture_x(t_input *input);
void 				ft_calculate_texture_step(t_input *input);
void 				ft_calculate_texture_start_pos(t_input *input);
void 				ft_calculate_texture_y(t_input *input);
int 				ft_read_png_file(t_input *input);
void 				ft_select_texture_path(t_input *input);
void				ft_get_texture_color(t_input *input);

/*
** ---------------------------SPRITES---------------------------------
*/

void 				ft_store_ray_len(t_input *input, int x);
int 				ft_initiate_sprite_buffer(t_input *input);
int 				ft_initiate_sprite_texture(t_input *input);
void 				ft_calculate_sprite_number(t_input *input);
int 				ft_render_sprites(t_input *input);
void 				ft_locate_sprite(t_input *input);
void 				ft_inverse_camera(t_input *input);
int 				ft_initiate_sprite_pos(t_input *input);
void 				ft_calculate_sprite_distance(t_input *input, int i);
void 				ft_sort_distance(t_input *input);
void 				ft_translate_sprite_pos(t_input *input, int i);
void 				ft_transform_sprite(t_input *input);
void 				ft_sprite_screen_x(t_input *input);
void 				ft_calculate_sprite_height(t_input *input);
void 				ft_draw_sprite_y(t_input *input);
void 				ft_calculate_sprite_width(t_input *input);
void 				ft_draw_sprite_x(t_input *input);
int 				ft_draw_sprites(t_input *input);
void 				ft_get_sprite_color(t_input *input);
void 				ft_calculate_sprite_texture_x(t_input *input, int stripe);
void 				ft_calculate_sprite_texture_y(t_input *input, int y);

#endif
