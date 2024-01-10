# Compiler & Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
INCLUDE = ./includes
OBJ_DIR = ./obj
SRC_DIR = ./src
PUSH_SWAP_DIR = $(SRC_DIR)/push_swap
PARSER_DIR = $(SRC_DIR)/parser
VALIDATION_DIR = $(SRC_DIR)/validation
UTILS_DIR = $(SRC_DIR)/utils

# Source files
HDRS = push_swap.h validation.h parser.h utils.h
SRCS
OBJS

# Targets
SOURCES
OBJECTS
HEADERS
NAME = libpush_swap.a

# Rules & Recipes
all: $(NAME)

$(NAME): $(OBJECTS)

$(OBJECTS): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -c -I$(INCLUDE) $< -o $@

