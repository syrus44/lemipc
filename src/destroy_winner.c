/*
** destroy_winner.c for destroy_winner in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 29 09:09:11 2013 jordan bettin
** Last update Sat Mar 30 14:58:33 2013 mael charles
*/

#include	"lemipc.h"

void	destroy_winner(int semID, int shmID)
{
  semctl(semID, 0, IPC_RMID);
  shmctl(shmID, 0, IPC_RMID);
  printf("Toutes les ressources sont détruites\n");
}
