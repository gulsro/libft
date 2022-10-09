#include <stdio.h>
#include <ctype.h>

int     ft_tolower(int c)
{
        if ((c >= 'A') && (c <= 'Z'))
        {
                c += 32;
        }
        return (c);
}

int main()
{
        int c = 'T';
        printf("%c\n", ft_tolower(c));
        printf("%c\n", tolower(c));
}
