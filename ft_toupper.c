#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		c -= 32;
	}
	return (c);
}
/*
int main()
{
	int c = '8';
        printf("%c\n", ft_toupper(c));
        printf("%c\n", toupper(c));
}
*/
