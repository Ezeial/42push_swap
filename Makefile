LIBFT_DIR			=	libft

INCLUDES_DIR		=	includes

SRCS_DIR			=	srcs

SRCS				=	$(wildcard $(SRCS_DIR)/*.c) \
							$(wildcard $(SRCS_DIR)/*/*.c) \
							$(wildcard $(SRCS_DIR)/*/*/*.c) 

CC					=	gcc
RM					=	rm -f
FLAGS				=	-Wall -Wextra -fsanitize=address -g3 -I./$(INCLUDES_DIR) -I./$(LIBFT_DIR) -L./$(LIBFT_DIR)


NAME				=	push_swap

all:				$(NAME)

$(NAME):			$(SRCS) $(INCLUDES_DIR)/push_swap.h
					make -C $(LIBFT_DIR)
					$(CC) $(FLAGS) -fsanitize=address $(SRCS) -lft -o $(NAME)

clean:
					make clean -C $(LIBFT_DIR)	
					$(RM) $(NAME)

fclean:				clean
					make fclean -C $(LIBFT_DIR)	
					$(RM) $(NAME)

re:					fclean $(NAME)

.PHONY:				all clean fclean re bonus 