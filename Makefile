##
## Makefile for Makefile in /home/bettin_j//Dropbox/Epitech/Projets/LemIPC
## 
## Made by jordan bettin
## Login   <bettin_j@epitech.net>
## 
## Started on  Wed Mar 20 14:11:59 2013 jordan bettin
## Last update Sat Mar 30 16:57:06 2013 mael charles
##

NAME	=	lemipc

INC_DIR	=	./include

SRC_DIR	=	./src

SRCS	=	$(SRC_DIR)/main.c		\
		$(SRC_DIR)/xmalloc.c		\
		$(SRC_DIR)/xftok.c		\
		$(SRC_DIR)/exit_perror.c	\
		$(SRC_DIR)/get_posX.c		\
		$(SRC_DIR)/get_posY.c		\
		$(SRC_DIR)/get_semID.c		\
		$(SRC_DIR)/init_components.c	\
		$(SRC_DIR)/init_players.c	\
		$(SRC_DIR)/kill_adv.c		\
		$(SRC_DIR)/move_on_map.c	\
		$(SRC_DIR)/search_and_destroy.c	\
		$(SRC_DIR)/stock_infos.c	\
		$(SRC_DIR)/create_map.c		\
		$(SRC_DIR)/xshmat.c		\
		$(SRC_DIR)/generate_map.c	\
		$(SRC_DIR)/create_players.c	\
		$(SRC_DIR)/put_player.c		\
		$(SRC_DIR)/destroy_winner.c	\
		$(SRC_DIR)/display_map.c	\
		$(SRC_DIR)/count_players.c	\
		$(SRC_DIR)/search_winner.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-W -Wall -Werror -Iinclude

DUST	=	*~ \#*\#

DUSTI	=	$(INC_DIR)/*~ $(INC_DIR)/\#*\#

DUSTS	=	$(SRC_DIR)/*~ $(SRC_DIR)/\#*\#

RM	=	rm -f

CC	=	gcc

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

dust	:
		$(RM) $(DUST)
		$(RM) $(DUSTI)
		$(RM) $(DUSTS)

clean	:	dust
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
