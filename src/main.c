/*
** main.c for main in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Thu Mar 21 18:29:12 2013 jordan bettin
** Last update Tue Mar 26 18:15:14 2013 jordan bettin
*/

#include	"lemipc.h"

int	main(int ac, char **av)
{
  if (ac != 3)
    {
      fprintf(stderr, USAGE);
      exit(EXIT_FAILURE);
    }
  stock_infos(av[0], av[1], av[2]);
  return (EXIT_SUCCESS);
}
