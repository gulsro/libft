# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: gozturk <gozturk@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/11 18:39:50 by gozturk       #+#    #+#                  #
#    Updated: 2022/10/26 11:24:27 by gozturk       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard *.c)

CC = cc

CFLAGS = -Wall -Werror -Wextra -g

OBJ = $(SRC:.c=.o)

%.o : %.c
			$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
			ar rc $@ $? 

clean :
			rm -f $(OBJ)

fclean :	clean
			rm -f $(NAME)

re : fclean all

.PHONY = all clean fclean re





