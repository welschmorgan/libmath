#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/11 05:27:36 by mwelsch           #+#    #+#              #
#    Updated: 2013/12/20 07:29:58 by mwelsch          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libmath.a

LIBFT_DIR = ../libft
LIBFT_BIN = $(LIBFT_DIR)/libft.a
LIBFT_INC = $(LIBFT_DIR)/inc
INC_DIR = ./inc -I$(LIBFT_INC)
SRC_DIR = ./src
OBJ_DIR = ./obj
UNITS = $(shell ls $(SRC_DIR) | grep .c)

UNITS_O = $(UNITS:.c=.o)
SRCS = $(patsubst %,$(SRC_DIR)/%,$(UNITS))
OBJS = $(patsubst %,$(OBJ_DIR)/%,$(UNITS_O))
CFLAGS = -Wall -Wextra -Werror -g -ansi -pedantic
LDFLAGS =
CC = clang
LNK = ar rcs
all: $(NAME) test_unit

test_unit:
	make -C test_unit

$(NAME): $(LIBFT_BIN) $(OBJS)
	$(LNK) $(NAME) $^ $(LDFLAGS)

$(LIBFT_BIN):
	make -C $(LIBFT_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -I$(INC_DIR) -o $@ $<

clean:
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
