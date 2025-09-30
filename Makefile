# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djuarez <djuarez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/27 12:48:24 by djuarez           #+#    #+#              #
#    Updated: 2025/09/24 18:02:15 by djuarez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = cc
CCFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g

NAME = libft.a

SRC = ft_strlen.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
      ft_isprint.c ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c \
      ft_strncmp.c ft_strnstr.c ft_atoi.c ft_strchr.c ft_strrchr.c \
      ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
      ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
      ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
      ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
      ft_isspace.c ft_strjoin_free.c ft_strndup.c ft_strstr.c ft_strcmp.c \
      ft_realloc.c \

OBJ = $(SRC:.c=.o)

INCLUDE = libft.h

.PHONY: all clean fclean re 

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE) Makefile
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
