# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: gozturk <gozturk@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/11 18:39:50 by gozturk       #+#    #+#                  #
#    Updated: 2022/10/19 15:21:06 by gozturk       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a

SRC = $(wildcard *.c)

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

%.o : %.c
			$(CC) $(CFLAGS) -c $< -o $@

all : $(TARGET)

$(TARGET) : $(OBJ)
			ar rc $@ $? 

clean :
			rm -f $(OBJ)

fclean :
			rm -f $(TARGET)

re : fclean all





