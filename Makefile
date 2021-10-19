# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajordan- <ajordan-@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 12:21:47 by ajordan-          #+#    #+#              #
#    Updated: 2021/10/18 13:02:25 by ajordan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
INCLUDES	= includes
LIBFT		= libft
SRCS_DIR	= src/
OBJS_DIR	= bin/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -f

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

SRC_FILES	= 

SRCS 		= $(addprefix $(SRCS_DIR), $(SRC_FILES))
OBJS 		= $(SRC_FILES:.c=.o) 
OBJS_PREFIX	= $(addprefix $(OBJS_DIR), $(OBJS))

all:			$(NAME)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
				@mkdir -p $(OBJS_DIR)
				@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
				@$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME):		$(OBJS_PREFIX) $(OBJS_DIR) $(INCLUDES)
				@make -C $(LIBFT)
				@cp libft/libft.a .
				@mv libft.a $(NAME)
				@$(CC) $(CFLAGS) -I $(INCLUDES) -o $(NAME) $(OBJS_PREFIX)
				@echo "$(GREEN)push_swap compiled!$(DEF_COLOR)"

clean:
				@$(RM) -r $(OBJS_DIR)
				@make clean -C $(LIBFT)
				@echo "$(BLUE)push_swap binary files cleaned!$(DEF_COLOR)"
				@echo "$(BLUE)libft binary files cleaned!$(DEF_COLOR)"

fclean:			clean
				@$(RM) $(NAME)
				@$(RM) $(LIBFT)/libft.a
				@echo "$(CYAN)push_swap executable files cleaned!$(DEF_COLOR)"
				@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:				fclean all
				@echo "$(GREEN)Cleaned and rebuilt everything for push_swap!$(DEF_COLOR)"

.PHONY:			all clean fclean re
