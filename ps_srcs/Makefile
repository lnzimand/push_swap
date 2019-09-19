# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnzimand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/24 10:26:37 by lnzimand          #+#    #+#              #
#    Updated: 2019/09/17 10:07:41 by lnzimand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra -c 

SRCS =	./alloc.c ./display.c ./ft_issign.c ./is_dup.c ./is_integer.c ./is_void.c \
		./max_and_min_int.c ./pop.c ./push_a.c ./push_b.c ./swap_a.c ./errors.c ./lstdel.c\
		./swap_b.c ./swap_ab.c ./rotate_a.c ./rotate_b.c ./rotate_ab.c ./stack_a.c\
		./reverse_rotate_a.c ./reverse_rotate_b.c ./reverse_rotate_ab.c ./array_length.c \
		./three_sort_a.c ./three_sort_b.c ./list_length.c

OBJS = ./alloc.o ./display.o ./ft_issign.o ./is_dup.o ./is_integer.o .//is_void.o \
	   ./max_and_min_int.o ./pop.o ./push_a.o ./push_b.o ./swap_a.o ./swap_b.o lstdel.o\
	   ./swap_ab.o ./rotate_a.o ./rotate_b.o ./rotate_ab.o ./reverse_rotate_a.o\
	   ./reverse_rotate_b.o ./reverse_rotate_ab.o ./errors.o ./array_length.o ./stack_a.o \
	   ./three_sort_a.o ./three_sort_b.o ./list_length.o

all:
	gcc $(FLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

.PHONY: all, clean
