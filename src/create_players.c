/*
** create_players.c for create_players in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Wed Mar 27 14:23:06 2013 jordan bettin
** Last update Sat Mar 30 16:54:39 2013 mael charles
*/

#include "lemipc.h"

void	create_players(t_players *p)
{
  p->semID = semget(p->key, 1, SHM_R | SHM_W);
  if (p->semID == -1)
    {
      p->semID = semget(p->key, 1, SHM_R | SHM_W | IPC_CREAT);
      semctl(p->semID, 0, SETVAL, 1);
    }
  else
    {
      semctl(p->semID, 0, IPC_RMID);
      p->semID = semget(p->key, 1, IPC_CREAT | SHM_R | SHM_W);
    }
  srand(time(NULL));
  p->posX = rand() % MAP_W;
  p->posY = rand() % MAP_H;
}
