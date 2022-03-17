# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 21:12:56 by dcorenti          #+#    #+#              #
#    Updated: 2022/03/17 17:57:25 by dcorenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CO_GREEN		= \033[1;32m
CO_RED			= \033[1;31m
CO_DEFAULT		= \033[0m

LIBFT 			= ./libft/libft.a

NAME 			= push_swap

SRCS =    	srcs/main.c 					\
			srcs/ft_check_arg.c				\
			srcs/ft_check_sort.c			\
			srcs/ft_errors.c				\
			srcs/ft_init_struc.c			\
			srcs/ft_malloc.c				\
			srcs/ft_push_min_to_b.c			\
			srcs/ft_push.c					\
			srcs/ft_radix_sort.c			\
			srcs/ft_reverse_rotate.c		\
			srcs/ft_rotate.c				\
			srcs/ft_simplify.c				\
			srcs/ft_sort_small_stack.c		\
			srcs/ft_swap.c					\
			srcs/ft_split_utils.c			\
			srcs/ft_split_arg.c				\
		
SURPL_O = 	main.o 					\
			ft_check_arg.o			\
			ft_check_sort.o			\
			ft_errors.o				\
			ft_init_struc.o			\
			ft_malloc.o				\
			ft_push_min_to_b.o		\
			ft_push.o				\
			ft_radix_sort.o			\
			ft_reverse_rotate.o		\
			ft_rotate.o				\
			ft_simplify.o			\
			ft_sort_small_stack.o	\
			ft_swap.o				\
			ft_utils.o				\
			ft_copy_s_matrice.c		\

CC 			= gcc

FLAGS 		= -Wall -Wextra -Werror

INCLUDES 	= -I./includes

OBJS 		= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	$(CC) $(FLAGS) $(INCLUDES) $(LIBFT) $(SRCS)-o $(NAME)
	clear
	@printf "${CO_GREEN}${NAME} successfully build!${CO_DEFAULT}\n"

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(SURPL_O) 
	rm -rf $(OBJS)
	clear
	@printf "${CO_RED}${SURPL_O} successfully deleted!${CO_DEFAULT}\n"

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)
	clear
	@printf "${CO_RED}${SURPL_O}${NAME} successfully deleted!${CO_DEFAULT}\n"

re : fclean all

.PHONY: all clean fclean re