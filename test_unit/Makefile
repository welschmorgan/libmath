#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/11 05:27:36 by mwelsch           #+#    #+#              #
#    Updated: 2013/12/20 07:18:40 by mwelsch          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = test_unit

LIBFT_DIR = ../../libft
LIBFT_INC = $(LIBFT_DIR)/inc
LIBMATH_DIR = ..
LIBMATH_BIN = $(LIBMATH_DIR)/libmath.a
LIBMATH_INC = $(LIBMATH_DIR)/inc

INC_DIR = ./inc -I$(LIBMATH_INC) -I$(LIBFT_INC)
SRC_DIR = ./src
OBJ_DIR = ./obj
UNITS = $(shell ls $(SRC_DIR) | grep .c)

UNITS_O = $(UNITS:.c=.o)
SRCS = $(patsubst %,$(SRC_DIR)/%,$(UNITS))
OBJS = $(patsubst %,$(OBJ_DIR)/%,$(UNITS_O))
CFLAGS = -Wall -Wextra -Werror -g -ansi
LDFLAGS =
CC = gcc
LNK = $(CC)
all: $(NAME)

$(NAME): $(OBJS)
	$(LNK) -o $(NAME) $^ -L$(LIBMATH_DIR) -lmath -L$(LIBFT_DIR) -lft

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -I$(INC_DIR) -o $@ $<

clean:
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
