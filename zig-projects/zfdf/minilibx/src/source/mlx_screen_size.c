#include	"mlx_int.h"

int		mlx_get_screen_size(void *mlx_ptr, int *sizex, int *sizey)
{
	XWindowAttributes	xwAttr;
	Status				ret;
	t_xvar				*xvar;
	
	xvar = mlx_ptr;
	ret = XGetWindowAttributes(xvar->display, xvar->root, &xwAttr);
	(*sizex) = xwAttr.width;
	(*sizey) = xwAttr.height;
}

int wrap_mlx_get_screen_size(void *mlx_ptr, int *size_x, int *size_y)
{
	return mlx_get_screen_size(mlx_ptr, size_x, size_y);
}
