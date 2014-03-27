/*
** pixel.c for pixel in /home/rosey_c/rendu/MUL_2013_wolf3d
**
** Made by rosey
** Login   <rosey_c@epitech.net>
**
** Started on  Tue Dec 10 10:27:23 2013 rosey
** Last update Fri Jan 10 14:01:09 2014 clément
*/

#include <mlx.h>
#include <math.h>

int	pixel()
{
  void *mlx_ptr;
  void *win_ptr;
  int	x;
  int	y;
  int	width;
  int	height;

  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, 800, 800, "WOLF");
  mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFFFF);
  //mlx_new_image(mlx_ptr, width, height);
  verti(mlx_ptr, win_ptr, x, y);
  while (42)
    ;
}

int	verti(void *mlx_ptr, void *win_ptr, int x, int y)
{
  y = 0;
  x = 0;
  while (x != 800)
    {
      while (y == 400)
	{
	  mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0xFEFEFE);
	  y ++;
	}
      
      while (y <= 400 && y <= 800)
	{
	  mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0x34C924);
	  y ++;
	}
   }
}

int	main()
{
  pixel();
  maps();
}
