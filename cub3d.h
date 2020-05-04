/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cub3d.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/09 11:24:46 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 21:45:54 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <math.h>
# include "minilibx-master/mlx.h"
# include "struct.h"

/*
** ---------------------------KEY-------------------------------------------
** These values identify characters or functions associated with each key
** changed left and right
*/

# define KEY_UP 65362
# define KEY_LEFT 65361
# define KEY_RIGHT 65363
# define KEY_DOWN 65364
# define ESC 65307
# define W 119
# define A 97
# define D 100
# define S 115
# define KEY_PRESS 2
# define KEY_RELEASE 3
# define DESTROY_NOTIFY	17

/*
** ---------------------------COLOR-------------------------------------------
*/

# define RED 0x00FF0000
# define GREEN 0x0000FF00
# define BLUE 0x000099ff
# define ORANGE 0x00ff9900
# define DARK_GREEN 0x00009933
# define DARK_PINK 0x00cc3399
# define WHITE 0x00FFFFFF
# define BLACK 0x00000000
# define GRAY 0x00808080
# define DARK_GRAY 0x00191919
# define ALICE_BLUE	0x00f0f8ff

/*
** ---------------------------MOVEMENT----------------------------------------
*/
# define MOVE_SPEED	0.15
# define ROTATE_SPEED 0.15

/*
** ---------------------------FUNCTIONS----------------------------------------
*/
int					ft_return_error(char *s, t_input *input);
int					ft_isspace(int c);
int					ft_isdigit(int c);
int					ft_char_range(int c);
void				ft_print_input(t_input input);
int					ft_parse_input(char *line, t_input *input);
int					ft_validate_element(t_input *input);
int					ft_process_map_line(char *line, t_input *input);
int					ft_validate_map(t_input *input);
int					ft_cast_ray(t_input *input);
int					ft_check_sprawning_pos(char c, t_input *input);
int					ft_calculate_ray(t_input *input);
void				ft_reset_input(t_input *input);
int					ft_check_position(int c);
void				ft_free_malloc(t_input *input);
int					ft_validate_file_input(int argc, char **argv,
					t_input *input);
int					ft_input_intake(char **argv, t_input *input);
void				ft_free_2d_array(char **array);

/*
** ---------------------------LIBRARIES----------------------------------------
*/
void				ft_bzero(void *s, size_t n);
int					get_next_line(int fd, char **line);
void				ft_putstr_fd(char *s, int fd);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
int					ft_atoi(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
char				**ft_split(char const *s, char c);
char				*ft_strdup(const char *s1);

/*
** ---------------------------PARSING-----------------------------
*/
int					ft_parse_n(t_input *input, int line, int *i);
int					ft_parse_s(t_input *input, int line, int *i);
int					ft_parse_w(t_input *input, int line, int *i);
int					ft_parse_e(t_input *input, int line, int *i);
int					ft_parse_sprite(t_input *input, int line, int *i);
int					ft_parse_res(t_input *input, int line, int *i);
int					ft_parse_floor(t_input *input, int line, int *i);
int					ft_parse_ceilling(t_input *input, int line, int *i);
int					ft_parse_number(t_input *input, int line,
					long long int *element, int *i);
int					ft_check_map_line(char *line);
int					ft_check_next_line(char *line);
int					ft_validate_input(char *line, t_input *input);
int					ft_input_parsing(t_input *input);
int					ft_lines_join_cub(char *line, t_input *input,
					int i1, int i2);
int					ft_lines_join(char *line, t_input *input, int i1, int i2);
int					ft_validate_map_line(char *line);
int					ft_check_spaces(char *line);
char				*ft_strdup_2(const char *s1);
void				ft_initiate_variables(t_input *input);
void				ft_initiate_sprite(t_input *input);
void				ft_initiate_texture(t_input *input);

/*
** ---------------------------UTILIS----------------------------------------
*/
void				ft_reset_move(t_input *input);
void				ft_reset_wall(t_input *input);
void				ft_reset_sprite(t_input *input);
void				ft_reset_bmp(t_input *input);

/*
** ---------------------------FLOOD FILL----------------------------------------
*/
int					ft_calculate_height(char **array);
int					ft_check_top_border(t_input *input);
int					ft_check_bottom_border(t_input *input);
int					ft_flood_fill(t_input *input, int x, int y);
int					ft_find_player_position(t_input *input);
int					ft_check_left_border(t_input *input);

/*
** ---------------------------CALCULATIONS-------------------------------------
*/

void				ft_set_player_position(t_input *input);
void				ft_set_player_orientation(t_input *input);
void				ft_set_plane_orientation(t_input *input);
void				ft_calculate_camera(t_input *input, int x);
void				ft_calculate_ray_dir(t_input *input);
void				ft_map_location(t_input *input);
void				ft_calculate_delta(t_input *input);
void				ft_step_direction(t_input *input);
void				ft_calculate_side_dist(t_input *input);
void				ft_calculate_ray_len(t_input *input);
void				ft_calculate_line_height(t_input *input);
void				ft_calculate_draw_start(t_input *input);
void				ft_calculate_draw_end(t_input *input);
void				ft_perform_dda(t_input *input);

/*
** ---------------------------COLORS----------------------------------------
*/

void				ft_choose_color(t_input *input);
void				ft_put_color_ceilling(t_input *input, int x);
void				ft_put_color_floor(t_input *input, int x);
void				ft_set_color(t_input *input);
/*
** ---------------------------MLX & MOVEMENT---------------------------------
*/

int					ft_initiate_window(t_input *input);
void				my_mlx_pixel_put(t_mlx *img, int x, int y, int color);
int					ft_key_movement(int keycode, t_input *input);
int					ft_release(int keycode, t_input *input);
int					ft_process_movement(t_input *input);
void				ft_move_forward(t_input *input);
void				ft_move_backward(t_input *input);
void				ft_rotate_right(t_input *input);
void				ft_rotate_left(t_input *input);
void				ft_move_left(t_input *input);
void				ft_move_right(t_input *input);
int					ft_close(t_input *input);
int					ft_render_next_frame(t_input *input);
int					ft_initiate_img_2(t_input *input);
void				ft_render_img(t_input *input, int x, int y, int color);
void				ft_display_img(t_input *input);

/*
** ---------------------------WALL---------------------------------
*/

void				ft_calculate_texture_num(t_input *input);
int					ft_render_wall(t_input *input, int x);
void				ft_calculate_wall_x(t_input *input);
void				ft_calculate_texture_x(t_input *input);
void				ft_calculate_texture_step(t_input *input);
void				ft_calculate_texture_start_pos(t_input *input);
void				ft_calculate_texture_y(t_input *input);
void				ft_read_png_file(t_input *input);
void				ft_select_texture_path(t_input *input);
void				ft_get_texture_color(t_input *input);
int					ft_initiate_north_texture(t_input *input);
int					ft_initiate_south_texture(t_input *input);
int					ft_initiate_west_texture(t_input *input);
int					ft_initiate_east_texture(t_input *input);

/*
** ---------------------------SPRITES---------------------------------
*/

void				ft_store_ray_len(t_input *input, int x);
int					ft_initiate_sprite_buffer(t_input *input);
int					ft_initiate_sprite_texture(t_input *input);
int					ft_calculate_sprite_number(t_input *input);
int					ft_render_sprites(t_input *input);
void				ft_locate_sprite(t_input *input);
void				ft_inverse_camera(t_input *input);
int					ft_initiate_sprite_pos(t_input *input);
void				ft_calculate_sprite_distance(t_input *input, int i);
void				ft_sort_distance(t_input *input);
void				ft_translate_sprite_pos(t_input *input, int i);
void				ft_transform_sprite(t_input *input);
void				ft_sprite_screen_x(t_input *input);
void				ft_calculate_sprite_height(t_input *input);
void				ft_draw_sprite_y(t_input *input);
void				ft_calculate_sprite_width(t_input *input);
void				ft_draw_sprite_x(t_input *input);
int					ft_draw_sprites(t_input *input);
void				ft_get_sprite_color(t_input *input);
void				ft_calculate_sprite_texture_x(t_input *input, int stripe);
void				ft_calculate_sprite_texture_y(t_input *input, int y);

/*
** ---------------------------BMP---------------------------------
*/

int					ft_create_bmp(t_input *input);

/*
** ---------------------------UTILS TO REMOVE---------------------------------
*/

void				ft_print_2d_array(char **array);
void				ft_print_remove(t_input *input);
char				**ft_split_2(char const *s, char c);

#endif
