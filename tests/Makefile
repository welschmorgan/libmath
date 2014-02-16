#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/15 03:16:55 by mwelsch           #+#    #+#              #
#    Updated: 2014/02/15 06:07:33 by mwelsch          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

UNITS = $(patsubst %, %/%.c, $(TESTS))
OBJS = $(patsubst %, %/%.o, $(TESTS))
NAME = tests

all: $(NAME)

$(NAME):
	@./make.sh all
	@./make.sh install

install:
	@./make.sh install
fclean: clean
	@./make.sh fclean
clean:
	@./make.sh clean
run:
	@./make.sh run
re: fclean all
.PHONY: fclean clean re run $(NAME)