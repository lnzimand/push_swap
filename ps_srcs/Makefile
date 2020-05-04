# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnzimand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/24 10:26:37 by lnzimand          #+#    #+#              #
#    Updated: 2020/01/28 12:59:27 by lnzimand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra -c 

SRCS =	./alloc.c ./display.c ./ft_issign.c ./is_dup.c ./is_integer.c ./is_void.c \
		./max_and_min_int.c ./pop.c ./push.c ./swap.c ./errors.c ./lstdel.c\
		./swap_ab.c ./rotate.c ./rotate_ab.c ./stack_a.c ./reverse_rotate.c \
		./reverse_rotate_ab.c ./array_length.c ./three_sort_a.c ./three_sort_b.c \
		./list_length.c ./two_sort.c ./sortb.c ./get_indexes.c ./biggest_int.c \
		./sorted_b.c ./getlastlist.c ./ps_push.c ./ps_swaps.c ./ps_rotate.c ./ps_rev_rot.c \
		./ps_both.c ./error_handler.c ./sorted_arr.c ./five_sort.c ./extended_five_sort.c \
		./push_to_a.c ./ps_all.c

OBJS = ./alloc.o ./display.o ./ft_issign.o ./is_dup.o ./is_integer.o .//is_void.o \
	   ./max_and_min_int.o ./pop.o ./push.o ./swap.o ./lstdel.o ./rotate.o ./rotate_ab.o\
	   ./reverse_rotate.o ./reverse_rotate_ab.o ./errors.o ./array_length.o ./stack_a.o \
	   ./three_sort_a.o ./three_sort_b.o ./list_length.o ./two_sort.o ./sortb.o \
	   ./get_indexes.o ./biggest_int.o ./sorted_b.o ./swap_ab.o ./getlastlist.o ./ps_push.o \
	   ./ps_swaps.o ./ps_rotate.o ./ps_rev_rot.o ./ps_both.o ./error_handler.o ./sorted_arr.o \
	   ./five_sort.o ./push_to_a.o ./extended_five_sort.o ./ps_all.o

all:
	gcc $(FLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

.PHONY: all, clean
