#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 14:02:18 by mwelsch           #+#    #+#              #
#    Updated: 2014/02/16 11:30:02 by mwelsch          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libmath.a
NAME_D = libmath_d.a

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

all: $(NAME_D) $(NAME)

debug: $(NAME_D)
release: $(NAME)

$(NAME): $(OBJS) $(LIBFT_LIB)
	@printf "\r\033[KLinking $@\n"
	@$(AR) $@ $^

$(NAME_D): $(OBJS_D) $(LIBFT_LIB_D)
	@printf "\r\033[KLinking $@\n"
	@$(AR) $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@printf "\r\033[KCompiling $<"
	@$(CC) -c -o $@ $<

$(OBJ_DIR_D)/%.o: $(SRC_DIR)/%.c
	@printf "\r\033[KCompiling $<"
	@$(CC_D) -c -o $@ $<

$(LIBFT_LIB):
	@make release -s -C $(LIBFT_DIR)

$(LIBFT_LIB_D):
	@make debug -s -C $(LIBFT_DIR)

clean:
	@$(RM) $(OBJS)
	@$(RM) $(OBJS_D)

fclean : clean
	@$(RM) $(NAME)
	@$(RM) $(NAME_D)

re: fclean all

.PHONY: clean fclean all re debug release