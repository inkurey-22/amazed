##
## EPITECH PROJECT, 2023
## B-PSU-100-LIL-1-1-navy-gaspard.grignet-le-perron
## File description:
## Makefile
##

SRC	=	src/main.c 					\
									\
		src/parsing/parsing.c 		\
		src/parsing/init_robot.c 	\
		src/parsing/comments.c 		\
		src/parsing/text.c 			\
		src/parsing/number_robot.c 	\
		src/parsing/rooms.c 		\
		src/parsing/start_end.c 	\
		src/parsing/error.c 		\
									\
		src/graph/utils.c 			\
		src/graph/create_graph.c 	\
		src/graph/free_graph.c 		\
									\
		src/display.c 				\
									\
		src/walking/init_moves.c 	\

OBJ	=	$(SRC:.c=.o)

NAME	=	amazed

CFLAGS	= -W -Wall -Wextra -Werror -Wpedantic -g

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy
	make clean

clean:
	make clean -C ./lib/my
	rm -f $(OBJ)

fclean: clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re:	fclean all
