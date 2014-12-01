/*
** create_map.c for create_map in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 22 16:16:05 2013 jordan bettin
** Last update Sat Mar 30 11:12:29 2013 jordan bettin
*/

#include	"lemipc.h"

int		**create_map(int p_key, t_players *p)
{
  void		*arena;

  p->shmID = shmget(p_key, (MAP_H * MAP_W), SHM_R | SHM_W);
  if (p->shmID == -1)
    {
      p->shmID = shmget(p_key, (MAP_H * MAP_W), IPC_CREAT | SHM_R | SHM_W);
      arena = xshmat(p->shmID, NULL, SHM_R | SHM_W);
      arena = generate_map_init(arena);
    }
  else
    {
      arena = xshmat(p->shmID, NULL, SHM_R | SHM_W);
      arena = generate_map(arena);
    }
  return (arena);
}
