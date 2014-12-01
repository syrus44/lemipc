/*
** exit_perror.c for exit_perror in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 22 16:21:39 2013 jordan bettin
** Last update Fri Mar 22 16:22:01 2013 jordan bettin
*/

#include	"lemipc.h"

void	exit_perror(char *msg)
{
  perror(msg);
  exit(EXIT_FAILURE);
}
