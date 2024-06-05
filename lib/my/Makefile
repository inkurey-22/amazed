##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC	=	my_putchar.c				\
		my_put_nbr.c				\
		my_putstr.c					\
		my_strlen.c					\
		my_nblen.c					\
		my_revstr.c					\
		my_strcat.c					\
		my_char_in_str.c 			\
		my_str_to_min.c 			\
		my_word_array_alpha.c 		\
		my_compute_power_it.c 		\
		my_get_word.c 				\
		my_rev_str_word.c 			\
		my_get_number.c 			\
		my_nb_to_str.c 				\
		my_strdup.c 				\
		my_str_malloc.c 			\
		my_str_realloc.c 			\
		my_str_to_word_array.c 		\
		my_word_array_len.c 		\
		my_strcmp.c 				\
		my_word_array_dup.c 		\
		my_word_array_free.c 		\
		my_str_is_alphanumeric.c 	\
		my_strncmp.c 				\
		my_memset.c 				\
		mini_printf.c 				\
		my_getnbr.c 				\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS = -Werror -Wextra -g

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
