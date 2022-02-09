# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaiel <anaiel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/04 14:27:57 by anleclab          #+#    #+#              #

#                                                                              #
# **************************************************************************** #

NAME = checker
NAME2 = push_swap

CFLAGS = -Wall -Wextra -Werror

PUSHSWAPFD = push_swap/
CHECKERFD = checker/
COMMONFD = common/

SRCSFD = src/
PUSHSWAP_SRC = main.c \
			   is_sorted.c \
			   quick_sort.c \
			   sort_3.c \
			   get_mediane.c \
			   reg_quick_sort.c \
			   pruebas.c
CHECKER_SRC = main.c \
			  get_instr.c \
			  checker.c \
			  usage.c
COMMON_SRC = follow_instructions.c \
			 fun_list.c \
			 get_opt.c \
			 get_pile.c \
			 instructions1.c \
			 instructions2.c \
			 instructions3.c \
			 print.c
OBJSFD = objs/
PUSHSWAP_OBJS = $(addprefix $(OBJSFD)$(PUSHSWAPFD), $(PUSHSWAP_SRC:.c=.o))
CHECKER_OBJS = $(addprefix $(OBJSFD)$(CHECKERFD), $(CHECKER_SRC:.c=.o))
COMMON_OBJS = $(addprefix $(OBJSFD)$(COMMONFD), $(COMMON_SRC:.c=.o))

HDRSFD = includes/
HDR = checker.h common.h push_swap.h 
HDRS = $(addprefix $(HDRSFD), $(HDR))

HDR_INC = -I./includes
LIBFT_HDR = -I./libft/includes/
LIB_BINARY = -L./libft -lft
LIBFT = libft/libft.a

RED = \033[0;31m
GREEN = \033[0;32m
NONE = \033[0m

all: check_libft project $(HDRS) $(NAME) $(NAME2)
	@echo "Project ready"

check_libft:
	@echo "Checking libft..."
	@make -C libft

project:
	@echo "Checking project..."

$(OBJSFD):
	@mkdir $@
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ directory"

$(OBJSFD)$(PUSHSWAPFD): $(OBJSFD)
	@mkdir $@
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ directory"

$(OBJSFD)$(CHECKERFD): $(OBJSFD)
	@mkdir $@
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ directory"

$(OBJSFD)$(COMMONFD): $(OBJSFD)
	@mkdir $@
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ directory"

$(NAME): $(OBJSFD)$(CHECKERFD) $(CHECKER_OBJS) $(OBJSFD)$(COMMONFD) $(COMMON_OBJS) $(LIBFT) $(HDRS)
	@gcc $(CFLAGS) $(LIB_BINARY) $(CHECKER_OBJS) $(COMMON_OBJS) -o $@
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ executable"

$(NAME2): $(OBJSFD)$(PUSHSWAPFD) $(PUSHSWAP_OBJS) $(OBJSFD)$(COMMONFD) $(COMMON_OBJS) $(LIBFT) $(HDRS)
	@gcc $(CFLAGS) $(LIB_BINARY) $(PUSHSWAP_OBJS) $(COMMON_OBJS) -o $@
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ executable"

$(OBJSFD)$(PUSHSWAPFD)%.o: $(SRCSFD)$(PUSHSWAPFD)%.c $(HDRS) $(LIBFT)
	@gcc $(CFLAGS) $(HDR_INC) $(LIBFT_HDR) -o $@ -c $<
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ object"

$(OBJSFD)$(CHECKERFD)%.o: $(SRCSFD)$(CHECKERFD)%.c $(HDRS) $(LIBFT)
	@gcc $(CFLAGS) $(HDR_INC) $(LIBFT_HDR) -o $@ -c $<
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ object"

$(OBJSFD)$(COMMONFD)%.o: $(SRCSFD)$(COMMONFD)%.c $(HDRS) $(LIBFT)
	@gcc $(CFLAGS) $(HDR_INC) $(LIBFT_HDR) -o $@ -c $<
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ object"

clean:
	@/bin/rm -rf $(OBJSFD)
	@echo "\t[ $(RED)✗$(NONE) ] $(OBJSFD) directory"
	@make -C ./libft clean

fclean: clean
	@/bin/rm -f $(NAME) $(NAME2)
	@echo "\t[ $(RED)✗$(NONE) ] $(NAME) executable"
	@echo "\t[ $(RED)✗$(NONE) ] $(NAME2) executable"
	@make -C ./libft fclean

re: fclean all

.PHONY: check_libft project all clean fclean re
