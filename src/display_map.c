/*
** display_map.c for display_map in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 29 14:04:50 2013 jordan bettin
** Last update Sat Mar 30 16:23:50 2013 mael charles
*/

#include	"lemipc.h"

void	display_map(int **map)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (x != MAP_W)
    {
      while (y != MAP_H)
	{
	  printf("%d ", map[x][y]);
	  y++;
	}
      y = 0;
      x++;
      printf("\n");
    }
  printf("---------------------------------------\n");
}
