/*==============================================================*/
//  File    : snake.h
//  Author  : Carlos García Sánchez
//  Created : 2025-11-09 23:09:07
/*==============================================================*/

# ifndef SNAKE_H
# define SNAKE_H
# define WINDOW_WIDTH 800
# define WINDOW_HEIGHT 600

# include <MLX42.h>
# include <stdbool.h>
# include <stdlib.h>

typedef struct s_snake
{
	mlx_t		*mlx;
	mlx_image_t	*image;
	int			x;
	int			y;
	int			length;
	bool		is_alive;
} t_snake;


# endif // SNAKE_H