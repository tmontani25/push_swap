# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmontani <tmontani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 15:40:04 by tmontani          #+#    #+#              #
#    Updated: 2024/04/04 12:05:25 by tmontani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom du programme final
NAME = push_swap

# Compilateur à utiliser
CC = gcc

# Options de compilation
CFLAGS = -Wall -g

# Liste des fichiers source pour push_swap
SRCS_PUSH_SWAP = push_swap.c stack_utils.c rotate.c reverse_rotate.c swap.c push.c send_to_algo.c stack_utils2.c sort_3.c big_sort.c push_cost.c stack_elements.c ft_execute.c

# Liste des fichiers objets pour push_swap
OBJS_PUSH_SWAP = $(SRCS_PUSH_SWAP:.c=.o)

# Répertoire où se trouve la bibliothèque libft
LIBFT_DIR = ../libft

# Nom de la bibliothèque libft
LIBFT = $(LIBFT_DIR)/libft.a

# Options de l'édition des liens pour inclure la bibliothèque libft
LDFLAGS = -L$(LIBFT_DIR) -lft

# Règle par défaut : construit le programme push_swap en reliant les fichiers objets et la bibliothèque libft
$(NAME): $(OBJS_PUSH_SWAP) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS_PUSH_SWAP) $(LDFLAGS)

# Règle générique pour générer les fichiers objets à partir des fichiers source
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets et le programme push_swap
clean:
	rm -f $(OBJS_PUSH_SWAP) $(NAME)

# Compilation de la bibliothèque libft
$(LIBFT):
	make -C $(LIBFT_DIR)

fclean: clean
	rm -f $(LIBFT)

.PHONY: clean

