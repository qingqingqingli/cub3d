/*
** to read from a file to an image object, XMP or PNG format is required
** two function:
** mlx_xmp_file_to_image & mlx_png_file_to_image (leaks memory)
*/

/* if the img variable is NULL, it means that the image reading has failed */
/* it will aslo set the img_width & img_height accordingly */

#include "/home/qli/codam/cub3d/cub3d.h"

int     main(void)
{
    void    *mlx;
    void    *img;
    char    *relative_path = "./test.xpm";
    int     img_width;
    int     img_height;

    mlx = mlx_init();
    img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
}