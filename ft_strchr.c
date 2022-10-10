#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len_s;

	i = 0;
	len_s = strlen(s) + 1; // +1 for '/0'
	while (i < len_s)
	{
		if (s[i] == (char)c)
		{
			return (char *(s + i));
		}
		i++;
	}
	return (0);
}
/*
int main()
{
        const char s[] = "banana";
        int c = 'e';
        printf("%s\n", ft_strchr(s, c));
        printf("%s\n", strchr(s, c));
}
*/
