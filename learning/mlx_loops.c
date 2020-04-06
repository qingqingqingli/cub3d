/*
** loops will continue to call your hook registered in mlx_loop_hook
** to render new frames, which we need to pass to the window
*/

/* to initiate a loop */
/* call the mlx_loop function with the mlx instance as only parameter */

#include <mlx.h>

int     main(void)
{
    void    *mlx;

    mlx = mlx_init();
    mlx_loop(mlx);
}

/* create a window and use the mutations */
/* for each frame, it will call the function render_next_frame*/
/* it will persist through multiple calls if it's a pointer*/

#include <mlx.h>

int     render_next_frame(void *YourStruct);

int     main(void)
{
    void    *mlx;

    mlx = mlx_init();
    mlx_loop_hook(mlx, render_next_frame, YourStruct);
    mlx_loop(mlx);
}