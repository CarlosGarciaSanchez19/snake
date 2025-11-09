/*==============================================================*/
//  File    : main.c
//  Author  : Carlos García Sánchez
//  Created : 2025-11-09 23:05:53
/*==============================================================*/

#include "snake.h"

void initialize_snake(t_snake *snake)
{
	snake->x = WINDOW_WIDTH / 2;
	snake->y = WINDOW_HEIGHT / 2;
	snake->length = 5;
	snake->is_alive = true;
	snake->mlx = mlx_init(WINDOW_WIDTH, WINDOW_HEIGHT, "Snake Game", true);
	if (!snake->mlx)
		exit(1);
	
}

int32_t main(void)
{
	t_snake	snake;

	initialize_snake(&snake);

	while (1)
	{
		if (mlx_is_key_down(snake.mlx, MLX_KEY_ESCAPE))
			mlx_close_window(snake.mlx);
		mlx_loop(snake.mlx);
	}

	mlx_terminate(snake.mlx);
	return (0);
}
