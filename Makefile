# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eva <eva@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/03 09:01:16 by eva               #+#    #+#              #
#    Updated: 2025/05/03 11:47:56 by eva              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilador y flags
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror

# Librería
NAME    = libft.a
AR      = ar rcs
RM      = rm -f

# Archivos obligatorios y bonus
SRC     = \
	ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c \
	ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c \
	ft_memcmp.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
	ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_itoa.c ft_split.c ft_striteri.c

BONUS_SRC = \
	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Objetos
OBJ         = $(SRC:.c=.o)
BONUS_OBJ   = $(BONUS_SRC:.c=.o)

# Reglas

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus