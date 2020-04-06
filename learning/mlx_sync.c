/*
** To synchronise your own frames
** Mlx sync ought to be called with the defined command codes
*/

/* 
** buffer all subsequential calls to an image
** (ptr is a pointer to the mlx image object)
*/
#define MLX_SYNC_IMAGE_WRITABLE    1 
/* to flush the window in order to propagate changes*/
#define MLX_SYNC_WIN_FLUSH_CMD     2
#define MLX_SYNC_WIN_CMD_COMPLETED 3

int	mlx_sync(int cmd, void *ptr);