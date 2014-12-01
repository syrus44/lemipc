/*
** search_winner.c for search_winner in /home/charle_b//Dropbox/LemIPC
** 
** Made by mael charles
** Login   <charle_b@epitech.net>
** 
** Started on  Sat Mar 30 16:52:23 2013 mael charles
** Last update Sat Mar 30 17:01:48 2013 mael charles
*/

#include "lemipc.h"

int	search_winner(int **map)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (x < MAP_H)
    {
      while (y < MAP_W)
	{
	  if (map[x][y] > 0)
	    return (map[x][y]);
	  y++;
	}
      y = 0;
      x++;
    }
  return (0);
}
