/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   struct.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/29 19:15:09 by qli           #+#    #+#                 */
/*   Updated: 2020/05/04 15:22:25 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H
# include "cub3d.h"

/*
** ---------------------------COLORS-------------------------------------------
*/

typedef struct		s_rgb
{
	int				r;
	int				g;
	int				b;
	int				wall;
	int				ceilling;
	int				floor;
}					t_rgb;

/*
** ---------------------------BMP-------------------------------------------
*/
typedef struct		s_file_header
{
	unsigned char	bitmap_type[2];
	int				file_size;
	short			reserved1;
	short			reserved2;
	unsigned int	offset_bits;
}					t_file_header;

typedef struct		s_image_header
{
	unsigned int	size_header;
	unsigned int	width;
	unsigned int	height;
	short int		planes;
	short int		bit_count;
	unsigned int	compression;
	unsigned int	image_size;
	unsigned int	ppm_x;
	unsigned int	ppm_y;
	unsigned int	clr_used;
	unsigned int	clr_important;
}					t_image_header;

typedef struct		s_bmp_data
{
	int				image_size;
	int				file_size;
	int				dpi;
	int				ppm;
	int				pixel_color;
	int				padding;
}					t_bmp_data;

/*
** ---------------------------MLX STRUCT----------------------------------------
*/

typedef struct		s_mlx
{
	void			*mlx;
	void			*mlx_win;
	void			*img;
	char			*addr;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
	int				texture_height;
	int				texture_width;
}					t_mlx;

typedef struct		s_mlx_2
{
	void			*img;
	int				*addr;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
	int				texture_height;
	int				texture_width;
}					t_mlx_2;

/*
** -----------------------------RAY CASTING STRUCT-----------------------------
*/

typedef struct		s_ray_casting
{
	double			pos_x;
	double			pos_y;
	char			sprawing_dir;
	double			dir_x;
	double			dir_y;
	double			plane_x;
	double			plane_y;
	double			ray_direction_x;
	double			ray_direction_y;
	double			camera_x;
}					t_ray_casting;

/*
** -----------------------------DDA(Dynamic Distance Algorithm)----------------
*/

typedef struct		s_dda
{
	int				map_x;
	int				map_y;
	double			side_dis_x;
	double			side_dis_y;
	double			delta_dis_x;
	double			delta_dis_y;
	int				step_x;
	int				step_y;
	int				side;
	double			ray_len;
	int				line_height;
	int				draw_start;
	int				draw_end;
}					t_dda;

/*
** -----------------------------MOVEMENT-----------------------------------
*/

typedef struct		s_movement
{
	int				move_forward;
	int				move_backward;
	int				move_right;
	int 			rotate_right;
	int				move_left;
	int 			rotate_left;
	int				close_window;
}					t_movement;

/*
** -----------------------------WALL TEXTURE-----------------------------------
*/

typedef struct		s_wall_texture
{
	int				texture_height;
	int				texture_width;
	int				texture_number;
	double			texture_wall_x;
	int				texture_x;
	double			texture_step;
	double			texture_start_pos;
	int				texture_y;
	int				wall_color;
	int				line_length;
	int				img_active;
}					t_wall_texture;

/*
** -----------------------------SPRITE DISTANCE-------------------------------
*/

typedef struct		s_sprite_pos
{
	double			distance;
	double			x;
	double			y;
}					t_sprite_pos;

/*
** -----------------------------SPRITE TEXTURE-------------------------------
*/

typedef struct		s_sprites_data
{
	double			*buffer;
	int				buffer_present;
	int				sprite_number;
	t_sprite_pos	*pos;
	int				pos_present;
	double			sprite_x;
	double			sprite_y;
	double			inverse_camera;
	double			transform_x;
	double			transform_y;
	int				sprite_screen_x;
	int				sprite_height;
	int				sprite_width;
	int				draw_start_x;
	int				draw_end_x;
	int				draw_start_y;
	int				draw_end_y;
	int				sprite_color;
	int				texture_x;
	int				texture_y;
	int				stripe;
}					t_sprites_data;

/*
** -----------------------------INPUT STRUCT-----------------------------------
*/
typedef struct		s_input
{
	t_ray_casting	ray_casting;
	t_mlx			img;
	t_mlx			img_2;
	t_mlx_2			north;
	t_mlx_2			south;
	t_mlx_2			east;
	t_mlx_2			west;
	t_mlx_2			sprite;
	t_mlx_2			bmp_color;
	t_dda			dda;
	t_rgb			color;
	t_movement		move;
	t_wall_texture	wall;
	t_sprites_data	sprite_data;
	t_file_header	file_header;
	t_image_header	image_header;
	t_bmp_data		bmp;
	char			*cub_line;
	char			**cub_array;
	int				bmp_needed;
	int				res_present;
	long long int	res_x;
	long long int	res_y;
	int				res_x_present;
	int				res_y_present;
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
	long long int	floor_r;
	long long int	floor_g;
	long long int	floor_b;
	long long int	ceilling_present;
	long long int	ceilling_r;
	long long int	ceilling_g;
	long long int	ceilling_b;
	char			*line;
	char			**array;
	char			**array_copy;
	int				flood_fill_x;
	int				flood_fill_y;
	int				ceilling_color;
	int				floor_color;
	int				map_line_present;
	int				element_line_present;
}					t_input;

#endif
