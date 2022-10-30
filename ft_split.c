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
	if (s[ft_strlen(s)] == c)
		return (count);
	return (count + 1);
}
*/


static	int	find_position(char *s, char c)
{
	char	*ptr;

	while (s)
	{
		if (ft_strchr(s, c) != 0)
			return (ptr)
	}
	return (0);
}


char **ft_split(char const *s, char c)
{
	char	**result;
	char	*ptr;
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if (ft_strchr(s, c) != 0)
	{
		while (i <= ft_)	
		while (s[i] != ptr)
		{
			result[j][i] =s[i];
			i++;
		}
		j++;
		
	}

}

/*
int main ()
{
	char *s = "bananastrawberrylemonade";
	char c = a;
}
*/
