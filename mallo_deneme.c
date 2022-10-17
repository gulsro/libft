#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    unsigned char   *bptr;

    bptr = b;
    i = 0;
    while (i < len)
    {
        bptr[i] = (unsigned char)c;
        i++;
    }
    return (b);

}

int main()
{
    size_t  len = 9;
    unsigned char *b = (unsigned char*)malloc(456 * sizeof(unsigned char));
	int c = 'b';
	*b = "fj";

    printf("%s\n", ft_memset(b, c, len));
    printf("%s\n", memset(b, c, len));
	free(b);
}
