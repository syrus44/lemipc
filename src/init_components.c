/*
** init_components.c for init_components in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 22 16:14:56 2013 jordan bettin
** Last update Sat Mar 30 17:01:35 2013 mael charles
*/

#include	"lemipc.h"

void	init_components(t_players *p, char *path)
{
  int	**map;
  int	count;
  int	timer;

  count = 1;
  timer = 0;
  p->key = xftok(path, 0);
  map = create_map(p->key, p);
  create_players(p);
  put_player(p, map);
  display_map(map);
  while (count > 0 && timer <= 60)
    {
      count = count_players(map);
      sleep(1);
      search_and_destroy(map, p);
      move_on_map(map);
      display_map(map);
      timer++;
    }
  printf("Le joueur %d a gagné LemIPC !!\n", search_winner(map));
  destroy_winner(p->semID, p->shmID);
  exit(EXIT_SUCCESS);
}
