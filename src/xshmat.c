/*
** xshmat.c for xshmat in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Mar 26 14:04:12 2013 jordan bettin
** Last update Tue Mar 26 14:12:29 2013 jordan bettin
*/

#include "lemipc.h"

void	*xshmat(int shmid, const void *shmaddr, int shmflg)
{
  void	*addr;

  addr = shmat(shmid, shmaddr, shmflg);
  if (addr == (void *) -1)
    {
      errno = EINVAL;
      exit_perror("shmat");
    }
  return (addr);
}
