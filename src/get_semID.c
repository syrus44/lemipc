/*
** get_semID.c for get_semID in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 22 16:23:41 2013 jordan bettin
** Last update Sat Mar 30 11:04:47 2013 jordan bettin
*/

#include	"lemipc.h"

int	get_semID(t_players *p)
{
  if (p == NULL)
    return (0);
  return (p->semID);
}
