/*
** xftok.c for xftok in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Mar 22 16:17:56 2013 jordan bettin
** Last update Fri Mar 22 17:12:05 2013 jordan bettin
*/

#include	"lemipc.h"

key_t	xftok(const char *pathname, int proj_id)
{
  key_t	key;

  key = ftok(pathname, proj_id);
  if (key == -1)
    {
      errno = ENOENT;
      exit_perror("ftok");
    }
  return (key);
}
