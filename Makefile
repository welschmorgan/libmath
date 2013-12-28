#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 14:02:18 by mwelsch           #+#    #+#              #
#    Updated: 2013/12/28 07:08:05 by mwelsch          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libmath
NAME_D = $(NAME)_d
EXT = a
TARGET = $(NAME).$(EXT)
TARGET_D = $(NAME_D).$(EXT)

LIBFT_NAME = libft
LIBFT_NAME_D = libft_d
LIBFT_EXT = a
LIBFT_TARGET = $(LIBFT_NAME).$(LIBFT_EXT)
LIBFT_TARGET_D = $(LIBFT_NAME_D).$(LIBFT_EXT)
LIBFT_DIR = ../$(LIBFT_NAME)
LIBFT_INC = $(LIBFT_DIR)/inc
LIBFT_LIB = $(LIBFT_DIR)/$(LIBFT_TARGET)
LIBFT_LIB_D = $(LIBFT_DIR)/$(LIBFT_TARGET_D)

INC = ./ -I./inc -I$(LIBFT_INC)
SRC_DIR = ./src
OBJ_BASE = ./obj
OBJ_DIR = $(OBJ_BASE)/release
OBJ_DIR_D = $(OBJ_BASE)/debug

UNITS = $(shell ls $(SRC_DIR) | grep .c)
UNITS_O = $(UNITS:.c=.o)

SRCS = $(patsubst %,$(SRC_DIR)/%,$(UNITS))
OBJS = $(patsubst %,$(OBJ_DIR)/%,$(UNITS_O))
OBJS_D = $(patsubst %,$(OBJ_DIR_D)/%,$(UNITS_O))

FLAGS = -Wall -Wextra -Werror -pedantic -std=c89
CFLAGS = $(FLAGS) -O3
CFLAGS_D = $(FLAGS) -ggdb -D_DEBUG

AR = ar rcs
CC = clang $(CFLAGS) -I$(INC)
CC_D = clang $(CFLAGS_D) -I$(INC)
RM = /bin/rm -f

all: $(TARGET_D) $(TARGET)

debug: $(TARGET_D)
release: $(TARGET)

$(TARGET): $(OBJS) $(LIBFT_LIB)
	@$(AR) $@ $^

$(TARGET_D): $(OBJS_D) $(LIBFT_LIB_D)
	@$(AR) $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) -c -o $@ $<

$(OBJ_DIR_D)/%.o: $(SRC_DIR)/%.c
	@$(CC_D) -c -o $@ $<

$(LIBFT_LIB):
	make release -C $(LIBFT_DIR)

$(LIBFT_LIB_D):
	make debug -C $(LIBFT_DIR)

clean:
	@$(RM) $(OBJS)
	@$(RM) $(OBJS_D)
	make clean -C $(LIBFT_DIR)

fclean : clean
	@$(RM) $(TARGET)
	@$(RM) $(TARGET_D)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: clean fclean all re debug release