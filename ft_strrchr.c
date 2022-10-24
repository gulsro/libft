#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = strlen(s);
	while (i <= len)
	{
		if (s[len - i] == (char)c)
		{
			return ((char *)(s + (len - i)));
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
        const char s[] = "banana";
        int c = '';
        printf("%s\n", ft_strrchr(s, c));
        printf("%s\n", strrchr(s, c));
}
*/
