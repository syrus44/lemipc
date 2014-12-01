/*
** stock_infos.c for stock_infos in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 22 16:10:05 2013 jordan bettin
** Last update Sat Mar 30 11:12:21 2013 jordan bettin
*/

#include	"lemipc.h"

int	stock_infos(char *path, char *p_name, char *t_name)
{
  t_players	*p;

  p = xmalloc(sizeof(t_players));
  if (p == NULL)
    return (-1);
  else
    {
      init_players(p);
      p->p_name = p_name;
      p->t_name = t_name;
      init_components(p, path);
    }
  return (0);
}
