#include <libft.h>
/*
static int	how_many_words(char *s, char c)
{
	int	i;
	int	count;
	
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			i++;
		count++;
		i++;
	}
	return (count + 1);
}
*/


static	int	find_position(char *s, char c)
{
	int	i;
	char	*ptr;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			i++;
		ptr = ft_strchr(s, c);
		return (ptr);
	}
	
}






/*
char **ft_split(char const *s, char c)
{
	char	**result;
	int	*count;
	int	i;
	
	*count = 0;
	int = 0;
	while (s[i])
	{
		if (s[i] == c)
		
	}

}
*/
char **ft_split(char const *s, char c)
{
	int	len;
	
	len = ft_strlen(s);
	
}

int main ()
{
	char *s = "bananastrawberrylemonade";
	char c = a;
}
