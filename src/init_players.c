/*
** init_players.c for init_players in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 22 16:12:29 2013 jordan bettin
** Last update Sat Mar 30 11:02:24 2013 jordan bettin
*/

#include	"lemipc.h"

int	init_players(t_players *p)
{
  p->p_name = xmalloc(sizeof(char)* 128);
  if (p->p_name == NULL)
    return (-1);
  p->t_name = xmalloc(sizeof(char) * 128);
  if (p->t_name == NULL)
    return (-1);
  return (0);
}
