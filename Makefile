NAME		=	push_swap

LIBFT		=	libft/libft.a

#------------------------------------PATH--------------------------------------

SRC_PATH	=	src/

OBJ_PATH	=	objs/

INCLUDE		=	include/

#---------------------------------COMPILATION----------------------------------

CC			= 	cc

FLAGS		=	-Wall -Wextra -Werror

#---------------------------------SOURCE FILES---------------------------------

SRC_FILES	=	calc_mvmts.c \
				calc_rotations.c \
				do_rotations.c \
				error.c \
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

SRCS		=	$(addprefix $(SRC_PATH), $(SRC_FILES))

#-----------------------------------OBJECTS------------------------------------

OBJ_FILES	=	$(SRC_FILES:.c=.o)

OBJS		=	$(addprefix $(OBJ_PATH), $(OBJ_FILES)) 

#------------------------------------RULES-------------------------------------

all:		${NAME}

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@$(CC) $(FLAGS) -I$(INCLUDE) -c $< -o $@

$(NAME): $(OBJ_PATH) $(OBJS)
		@echo "Creating libft..."
		@make -C libft/
		@echo "Creating push_swap..."
		@$(CC) -I$(INCLUDE) -o $(NAME) $(OBJS) $(LIBFT)

clean:
		@echo "Removing libft objects..."
		@make clean -C libft/	
		@echo "Removing push_swap objects..."
		@rm -f ${OBJS}

fclean: clean
		@echo "Removing libft..."
		@rm -f ${LIBFT}
		@echo "Removing push_swap..."
		@rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
