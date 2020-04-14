/* What is a hook?
** TO alter or argment the behaviour of an operating system/application/other software components
** BY intercepting function calls / messages / events passed between software components
** Hooking is the backbone of minilbX
*/

#include "/home/qli/codam/cub3d/cub3d.h"

typedef struct  s_vars {
    void        *mlx;
    void        *win;
}               t_vars;

int             close(int keycode, t_vars *vars)
{
    mlx_destroy_window(vars->mlx, vars->win);
}

int             main(void)
{
    t_vars      vars;

    vars.mlx = mlx_init();
    vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello world!");
	/*
	** register a hook function (with mlx_key_hook) that will close the window whenever we press a key
	** in the background, it calls the function (mlx_hook) with the X11 event type
	*/
    mlx_key_hook(vars.win, close, &vars);
    mlx_loop(vars.mlx);
} 