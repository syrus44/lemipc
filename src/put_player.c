/*
** put_player.c for put_player in /home/charle_b//Dropbox/LemIPC
** 
** Made by mael charles
** Login   <charle_b@epitech.net>
** 
** Started on  Wed Mar 27 15:04:55 2013 mael charles
** Last update Sat Mar 30 11:05:22 2013 jordan bettin
*/

#include "lemipc.h"

void	put_player(t_players *p, int **map)
{
  if (map[p->posX][p->posY] == 0)
    map[p->posX][p->posY] = p->semID;
  else
    {
      while (map[p->posX][p->posY] > 0)
	{
	  srand(time(NULL));
	  p->posX = rand() % MAP_W;
	  p->posY = rand() % MAP_H;
	}
      map[p->posX][p->posY] = p->semID;
    }
}
