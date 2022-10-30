#include <string.h>
#include <stdio.h>
#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
//	int	i;
	int	len;

//	i = 0;
	len = ft_strlen(s);
	while (0 <= len)
	{
		if (s[len] == (char)c)
		{
			return ((char *)(s + len));
		}
		len--;
	}
	return (NULL);
}
/*
int main()
{
        const char s[10] = "bananalar";
        int c = 'a';
        printf("%s\n", ft_strrchr(s, c));
        printf("%s\n", strrchr(s, c));
}
*/
