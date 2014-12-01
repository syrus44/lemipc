/*
** kill_adv.c for kill_adv in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 22 16:16:50 2013 jordan bettin
** Last update Sat Mar 30 14:57:49 2013 mael charles
*/

#include	"lemipc.h"

void	kill_adv(int semTargeted)
{
  semctl(semTargeted, 0, IPC_RMID);
  printf("Le joueur %d a été tué !\n", semTargeted);
}
