#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long int	i;
	
	i = n;
	if (i < 0)
	{
		i = i * -1;
		write(fd, "-", 1);	
	}
	if (i > 9)
		ft_putnbr_fd(i / 10, fd);
	i = i % 10;
	i = i + '0';
	write(fd, &i, 1);
}
/*
int main()
{
	int n = -67;
	int fd = 1;
	ft_putnbr_fd(n, fd);	
}
*/
