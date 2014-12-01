/*
** count_players.c for count_players in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Sat Mar 30 10:57:39 2013 jordan bettin
** Last update Sat Mar 30 11:15:02 2013 mael charles
*/

#include	"lemipc.h"

int	count_players(int **map)
{
  int	x;
  int	y;
  int	count;

  x = 0;
  y = 0;
  count = 0;
  while (x != MAP_W)
    {
      while (y != MAP_H)
	{
	  if (map[x][y] != 0)
	    count++;
	  y++;
	}
      y = 0;
      x++;
    }
  return (count);
}
