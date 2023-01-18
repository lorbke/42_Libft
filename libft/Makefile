# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lorbke <lorbke@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 16:30:49 by lorbke            #+#    #+#              #
#    Updated: 2023/01/18 15:45:22 by lorbke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# SHELL macro
SHELL := /bin/bash

# name macro
NAME := libft.a

# command macros
CC := cc
AR := ar rcs
RM := rm -f
ADD_FLAGS := #-g -fsanitize=address,undefined
FLAGS := -Wall -Wextra -Werror

# src and obj files macros
SRC_PATH := src
OBJ_PATH := obj
SRC := $(wildcard $(SRC_PATH)/*.c) $(wildcard $(SRC_PATH)/*/*.c)
OBJ := $(addprefix $(OBJ_PATH)/, $(addsuffix .o, $(notdir $(basename $(SRC)))))

# VPATH macro
VPATH := $(SRC_PATH) $(SRC_PATH)/adds $(SRC_PATH)/ft_printf \
$(SRC_PATH)/ft_vector $(SRC_PATH)/standard

# default rule
default: makedir all

# file targets
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	@echo "make: libft success!"

$(OBJ_PATH)/%.o: %.c
	$(CC) $(FLAGS) $(ADD_FLAGS) -c $< -o $@

# phony targets
all: $(NAME)

makedir:
	@mkdir -p $(OBJ_PATH)

clean:
	@echo "libft: "
	$(RM) -r $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean makedir all

.PHONY: all clean fclean re
