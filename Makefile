CFLAGS   = -Wall -Werror -Wextra 

TARGET   = ft_strncmp

SRC = ft_strncmp.c

OBJECT =  &(SRC:.c=.o)

$(TARGET) : $(OBJECT)
	gcc -o ft_strncmp $(OBJECT)
	
	
clean:
	rm -f ft_strncmp
