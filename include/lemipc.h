/*
** lemipc.h for lemipc in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC/include
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Wed Mar 20 14:17:40 2013 jordan bettin
** Last update Sat Mar 30 16:56:35 2013 mael charles
*/

#ifndef		LEMIPC_H
# define	LEMIPC_H

/* DEFINES ET INCLUDES */

# include	<stdio.h>
# include	<stdlib.h>
# include	<unistd.h>
# include	<string.h>
# include	<sys/ipc.h>
# include	<sys/types.h>
# include	<sys/msg.h>
# include	<sys/sem.h>
# include	<sys/shm.h>
# include	<errno.h>
# include	<time.h>

# define	UNUSED		__attribute__((unused))
# define	USAGE		"Usage : ./lemipc (player_name) (team_name)\n"
# define	MAP_H		20
# define	MAP_W		20

/* STRUCTS, ENUMS, UNIONS */

typedef struct	s_players
{
  char		*p_name;
  char		*t_name;
  key_t		key;
  int		semID;
  int		posX;
  int		posY;
  int		shmID;
}		t_players;

/* PROTOTYPES DE FONCTIONS */

int	main(int ac, char **av);
int	stock_infos(char *path, char *p_name, char *t_name);
int	init_players(t_players *p);
void	init_components(t_players *p, char *path);
int	**create_map(int p_key, t_players *p);
int	**generate_map(void *map);
int	**generate_map_init(void *map);
int	count_players(int **map);
void	create_players(t_players *p);
void	search_and_destroy(int **map, t_players *p);
void	kill_adv(int semTargeted);
void	destroy_winner(int semID, int shmID);
key_t	xftok(const char *pathname, int proj_id);
void	*xmalloc(size_t size);
void	*xshmat(int shmid, const void *shmaddr, int shmflg);
void	exit_perror(char *msg);
int	get_posX(t_players *p);
int	get_posY(t_players *p);
int	get_semID(t_players *p);
void	put_player(t_players *p, int **map);
void	display_map(int **map);
void	move_on_map(int **map);
void	move(int **map, int x, int y);
int	search_winner(int **map);

#endif
