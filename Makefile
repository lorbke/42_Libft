# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lorbke <lorbke@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 10:51:07 by lorbke            #+#    #+#              #
#    Updated: 2022/04/12 18:05:28 by lorbke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c ft_memcpy.c \
ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strchr.c \
ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

NAME = libft.a

OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

OBJ_DIR = obj/
OBJ_PREFX = $(addprefix $(OBJ_DIR), $(OBJ))
OBJB_PREFX = $(addprefix $(OBJ_DIR), $(OBJB))

C_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJ_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling: $<"
	@gcc $(C_FLAGS) -c $< -o $@

$(NAME): $(OBJ_PREFX)
	@ar cr $(NAME) $(OBJ_PREFX)
	@echo "Libft Done!"

clean:
	@/bin/rm -rf $(OBJ_DIR)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

test:
	@gcc $(C_FLAGS) tests.c $(SRC) $(SRCB)

bonus: $(OBJB_PREFX)
	@ar r $(NAME) $(OBJB_PREFX)
	@echo "Libft Bonus Done !"

.PHONY: clean
