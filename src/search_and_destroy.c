/*
** search_and_destroy.c for search_and_destroy in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 29 09:23:11 2013 jordan bettin
** Last update Sat Mar 30 11:03:58 2013 jordan bettin
*/

#include	"lemipc.h"

void	search_and_destroy(int **map, t_players *p)
{
  int	x;
  int	y;

  x = 0;
  y = 0;
  while (map[x])
    {
      while (map[x][y])
	{
	  if (map[x][y] == p->semID)
	    kill_adv(p->semID);
	  y++;
	}
      y = 0;
      x++;
    }
}
