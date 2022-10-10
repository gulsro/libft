#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = strlen(s) + 1;
	while (i < len)
	{
		if (s[len - i] == (char)c)
		{
			return (char *(s + (len - i)));
		}
		i++;
	}
	return (0);
}
/*
int main()
{
        const char s[] = "binine";
        int c = 'i';
        printf("%s\n", ft_strrchr(s, c));
        printf("%s\n", strrchr(s, c));
}*/
