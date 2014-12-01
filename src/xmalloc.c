/*
** xmalloc.c for xmalloc in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 22 16:19:39 2013 jordan bettin
** Last update Fri Mar 22 16:20:56 2013 jordan bettin
*/

#include	"lemipc.h"

void	*xmalloc(size_t size)
{
  void	*ptr;

  ptr = malloc(size);
  if (ptr == NULL)
    {
      fprintf(stderr, "Allocating memory failed ! STOP !\n");
      exit(EXIT_FAILURE);
    }
  return (ptr);
}
