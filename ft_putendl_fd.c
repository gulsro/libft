#include <unistd.h>
#include <string.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;
	
	len = strlen(s);
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

int main()
{
	char *s = "banana";
	int fd = 1;
	ft_putendl_fd(s, fd);
}
