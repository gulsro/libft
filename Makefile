# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: gozturk <gozturk@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/11 18:39:50 by gozturk       #+#    #+#                  #
#    Updated: 2022/10/17 13:31:01 by gozturk       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a

SRC = ft_atoi.c ft_isprint.c ft_strchr.c ft_strrchr.c\
		ft_bzero.c ft_memchr.c ft_strdup.c ft_substr.c\
		ft_calloc.c ft_memcmp.c ft_strlcat.c ft_tolower.c\
		ft_isalnum.c ft_memcpy.c ft_strlen.c ft_toupper.c\
		ft_isdigit.c ft_memset.c ft_strnstr.c ft_isalpha.c\
		ft_memmove.c ft_strncmp.c

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

%.o : %.c
			$(CC) $(CFLAGS) -c $< -o $@

all : $(TARGET)

$(TARGET) : $(OBJ)
			ar rc $@ 

clean :
			rm -f $(OBJ)

fclean :
			rm -f $(TARGET)

re : fclean all





