NAME		=	push_swap

INCLUDE		=	include/

LIBFT		=	libft/libft.a

SRCS_FILES	=	calc_final_pos.c \
				calc_rotations.c \
				do_rotations.c \
				error.c \
				fill_data.c \
				fill_stack.c \
				find_best_candidate.c \
				ft_push.c \
				ft_rotate.c \
				ft_rrotate.c \
				ft_swap.c \
				list_validity.c \
				list_utils.c \
				main.c \
				sort_large.c \
				sort_small.c

SRCS		=	${addprefix src/, ${SRCS_FILES}}

CC			= 	cc -Wall -Wextra -Werror -I${INCLUDE}

all:		${NAME}

${NAME}:	${SRCS} include/push_swap.h
		make -C libft/
		${CC} -o ${NAME} ${SRCS} ${LIBFT}

clean:	
		rm -f ${OBJS}
		make clean -C libft/	

fclean:		clean
		rm -f ${NAME}
		rm -f ${LIBFT}

re:			fclean all

.PHONY: all clean fclean re