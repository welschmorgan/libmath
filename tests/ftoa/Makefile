#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/15 03:19:30 by mwelsch           #+#    #+#              #
#    Updated: 2014/02/15 07:52:25 by mwelsch          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ftoa
BIN_DIR = ../bin
TARGET = $(BIN_DIR)/$(NAME)
LIBFT = ../../
LDFLAGS = -L$(LIBFT) -lft_d
CFLAGS = -Wall -Werror -Wextra -Qunused-arguments -ansi -pedantic -std=c89 \
		-ggdb -D_DEBUG
IFLAGS = -I$(LIBFT)/inc -I./

all: $(NAME)

$(NAME): $(NAME).o $(LIBFT)/libft_d.a
	@printf "\r\033[K\t[link] $@\n"
	@clang -o $@ $^ $(LDFLAGS)

$(LIBFT)/libft_d.a:
	make all -C $(LIBFT)

%.o: %.c
	@printf "\r\033[K\t[compile] $<\n"
	@clang -c -o $@ $< $(CFLAGS) $(IFLAGS)

install:
	@cp $(NAME) $(TARGET)

clean_install:
	@rm -rf $(TARGET)

run:
	$(TARGET)

fclean: clean
	@rm -rf $(NAME)

clean:
	@rm -rf $(NAME).o

re: fclean all

.PHONY: fclean clean all re install clean install run