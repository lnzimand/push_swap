# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnzimand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/24 10:26:37 by lnzimand          #+#    #+#              #
#    Updated: 2020/01/28 13:01:14 by lnzimand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra

NAME = push_swap.a

OBJS = ./libft/ft_strchr.o ./libft/ft_strrchr.o ./libft/ft_strstr.o ./libft/ft_strnstr.o \
	   ./libft/ft_strcmp.o ./libft/ft_strncmp.o ./libft/ft_atoi.o ./libft/ft_isalpha.o \
	   ./libft/ft_isdigit.o ./libft/ft_isalnum.o ./libft/ft_isascii.o ./libft/ft_isprint.o \
	   ./libft/ft_toupper.o ./libft/ft_tolower.o ./libft/ft_memalloc.o ./libft/ft_memdel.o \
	   ./libft/ft_strnew.o ./libft/ft_strdel.o ./libft/ft_strclr.o ./libft/ft_striter.o \
	   ./libft/ft_striteri.o ./libft/ft_strmap.o ./libft/ft_strmapi.o ./libft/ft_strequ.o \
	   ./libft/ft_strnequ.o ./libft/ft_strsub.o ./libft/ft_strjoin.o ./libft/ft_strtrim.o \
	   ./libft/ft_strsplit.o ./libft/ft_itoa.o ./libft/ft_putchar.o ./libft/ft_putstr.o \
	   ./libft/ft_putendl.o ./libft/ft_putnbr.o ./libft/ft_putchar_fd.o ./libft/ft_putstr_fd.o \
	   ./libft/ft_putendl_fd.o ./libft/ft_putnbr_fd.o ./libft/ft_strrev.o ./libft/ft_bzero.o \
	   ./libft/ft_lstdel.o ./libft/ft_lstdelone.o ./libft/ft_lstiter.o ./libft/ft_lstnew.o \
	   ./libft/ft_memccpy.o ./libft/ft_memchr.o ./libft/ft_memcmp.o ./libft/ft_memcpy.o \
	   ./libft/ft_memmove.o ./libft/ft_memset.o ./libft/ft_strcat.o ./libft/ft_strcpy.o \
	   ./libft/ft_strdup.o ./libft/ft_strlcat.o ./libft/ft_strlen.o ./libft/ft_atol.o \
	   ./libft/ft_strncat.o ./libft/ft_strncpy.o ./libft/ft_lstadd.o ./libft/ft_isspace.o\
	   ./gnl/get_next_line.o ./ps_srcs/alloc.o ./ps_srcs/display.o ./ps_srcs/ft_issign.o \
	   ./ps_srcs/is_dup.o ./ps_srcs/is_integer.o ./ps_srcs/is_void.o ./ps_srcs/max_and_min_int.o \
	   ./ps_srcs/lstdel.o ./ps_srcs/pop.o ./ps_srcs/push.o ./ps_srcs/swap.o ./ps_srcs/swap_ab.o \
	   ./ps_srcs/rotate.o ./ps_srcs/rotate_ab.o ./ps_srcs/reverse_rotate.o \
	   ./ps_srcs/reverse_rotate_ab.o ./ps_srcs/errors.o ./ps_srcs/array_length.o \
	   ./ps_srcs/stack_a.o ./ps_srcs/three_sort_a.o ./ps_srcs/three_sort_b.o \
	   ./ps_srcs/list_length.o ./ps_srcs/two_sort.o ./ps_srcs/sortb.o ./ps_srcs/get_indexes.o \
	   ./ps_srcs/biggest_int.o ./ps_srcs/sorted_b.o ./ps_srcs/getlastlist.o ./ps_srcs/ps_push.o \
	   ./ps_srcs/ps_swaps.o ./ps_srcs/ps_rotate.o ./ps_srcs/ps_rev_rot.o ./ps_srcs/ps_both.o \
	   ./ps_srcs/error_handler.o ./ps_srcs/sorted_arr.o ./ps_srcs/five_sort.o ./ps_srcs/ps_all.o\
	   ./ps_srcs/push_to_a.o ./ps_srcs/extended_five_sort.o

libftmake = $(MAKE) -C libft

ps_srcs = $(MAKE) -C ps_srcs

gnl = $(MAKE) -C gnl

INC = push_swap.h

all: $(NAME)
$(NAME) : 
	$(libftmake)
	$(ps_srcs)
	$(gnl)
	ar rv $(NAME) $(OBJS) $(INC)
	ranlib $(NAME)
	cc push_swap.c $(FLAGS) $(NAME) -o push_swap
	cc checker.c $(FLAGS) $(NAME) -o checker

clean:
	$(MAKE) -C libft/ clean
	$(MAKE) -C ps_srcs/ clean
	$(MAKE) -C gnl/ clean

fclean: clean
	rm -f $(NAME) push_swap checker

re: fclean all

.PHONY: all, re, clean, fclean
