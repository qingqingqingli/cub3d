/*
** events are the foundation of writing applications in MinilibX
** Hooks are merely a function that gets called whenever an event is triggered
*/

/*
** X11 events:
** such as: KeyPress, KeyRelease, ButtonPress...
*/

/*
** Each each has an according mask
** so you can register to only one key when it triggers
** or to all keys if you leave your mask to the default
** such as: NoEventMask 0L, KeyPressMask (1L<<0), KeyReleaseMask (1L<<1)
*/

/*
** Here we register to the KeyPress event with the according KeyPressMask
** Now whenever we press a key, the window will be closed.
*/

#include <mlx.h>

typedef struct  s_vars {
        void    *mlx;
        void    *win;
}               t_vars;

int             close(int keycode, t_vars *vars)
{
    mlx_destroy_window(vars->mlx, vars->win);
}

int             main(void)
{
    t_vars    vars;

    vars.mlx = mlx_init();
    vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello world!");
    mlx_hook(vars.win, 2, 1L<<0, close, &vars);
    mlx_loop(vars.mlx);
} 