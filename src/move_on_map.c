/*
** move_on_map.c for move_on_map in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 22 16:17:18 2013 jordan bettin
** Last update Sat Mar 30 16:25:17 2013 mael charles
*/

#include	"lemipc.h"

void	move(int **map, int x, int y)
{
  int	dir;
  int	player;

  player = map[x][y];
  map[x][y] = 0;
  srand(time(NULL));
  dir = rand() % 4;
  if (dir == 0 && y != (MAP_W))
    y++;
  else if (dir == 1 && x != (MAP_H - 1))
    x++;
  else if (dir == 2 && y != 0)
    y--;
  else if (dir == 3 && x != 0)
    x--;
  if (map[x][y] == 0)
    map[x][y] = player;
}

void	move_on_map(int **map)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (x < MAP_H)
    {
      while (y < MAP_W && x < MAP_H)
	{
	  if (map[x][y] > 0)
	    {
	      move(map, x, y);
	      y++;
	      x++;
	    }
	  y++;
	}
      y = 0;
      x++;
    }
}
