/*
** generate_map.c for generate_map in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Mar 26 18:06:16 2013 jordan bettin
** Last update Sat Mar 30 11:14:35 2013 jordan bettin
*/

#include "lemipc.h"

int	**generate_map_init(void *arena)
{
  int	x;
  int	y;
  int	**map;

  x = 0;
  y = 0;
  map = xmalloc(MAP_W * MAP_H * sizeof(int *));
  while (x < MAP_W)
    {
      map[x] = &((int *)arena)[MAP_H * x];
      x++;
    }
  x = 0;
  while (x < MAP_W)
    {
      while (y < MAP_H)
	{
	  map[x][y] = 0;
	  y++;
	}
      y = 0;
      x++;
    }
  return (map);
}

int	**generate_map(void *arena)
{
  int	x;
  int	**map;

  x = 0;
  map = xmalloc(MAP_W * MAP_H * sizeof(int *));
  while (x < MAP_W)
    {
      map[x] = &((int *)arena)[MAP_H * x];
      x++;
    }
  return (map);
}
