# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: v <v@student.42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 12:51:48 by tjun-yu           #+#    #+#              #
#    Updated: 2024/02/02 11:58:36 by v                ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler & Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
INCLUDE = ./includes
OBJ_DIR = ./obj
SRC_DIR = ./src

PUSH_SWAP_DIR = $(SRC_DIR)/push_swap
STACK_DIR = $(SRC_DIR)/stack
PARSER_DIR = $(SRC_DIR)/parser
VALIDATION_DIR = $(SRC_DIR)/validation
UTILS_DIR = $(SRC_DIR)/utils

# Targets & Source files
SOURCES = $(wildcard \
		  $(PUSH_SWAP_DIR)/*.c \
		  $(STACK_DIR)/*.c \
		  $(PARSER_DIR)/*.c \
		  $(VALIDATION_DIR)/*.c \
		  $(UTILS_DIR)/*.c)
#OBJECTS = $(patsubst %.c, $(OBJ_DIR)/%.o, $(notdir $(SOURCES)))
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))
HEADERS = $(INCLUDE)/push_swap.h \
		  $(STACK_DIR)/stack.h \
		  $(PARSER_DIR)/parser.h \
		  $(VALIDATION_DIR)/validation.h \
		  $(UTILS_DIR)/utils.h
NAME = libpush_swap.a

# Rules & Recipes
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $^

# $(OBJECTS): $(SOURCES) $(HEADERS)
# 	$(CC) $(CFLAGS) -c -I$(INCLUDE) $< -o $@
obj/%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -I$(INCLUDE) $< -o $@

run: re clean
	$(CC) $(CFLAGS) -I$(INCLUDE) $(NAME) main.c -o push_swap -L. -lpush_swap

clean:
	rm -rf $(OBJECTS)

fclean:
	rm -rf $(OBJECTS) $(NAME)

re: fclean all

.PHONY: all clean fclean re run
