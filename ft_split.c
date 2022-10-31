#include <stdio.h>
#include "libft.h"

static int	how_many_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0' && str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
	}
	return (count);
}

static int	word_length(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static char *make_substr(const char *str, char c) 
{
	char *sub;
	int	i;
	int	len;

	i = 0;
	len = word_length(str, c);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	while (str[i] == c)
		i++;
	while (str[i] != '\0' && str[i])
	{
		sub[i] = str[i];
		i++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}

static char	*next_word(char const *str, char c)
{
	int	i;
	int	j;
	char *ptr;

	ptr = (char *)str;
	i = 0;
	j = 0;
	if (!str)
		return (0);
	while (ptr)
	{	
		while (str[i] == c)
		{	
			i++;
		}
		while (str[i] != c)
		{
			j++;	
		}
		ft_substr(str, i, j - i + 1);

	}
	return (0);
}

char **ft_split(char const *s, char c)
{
	char **arr;
	int	i;
	int	words;

	i = 0;
	words = how_many_words(s, c);
	arr = (char**)malloc(sizeof(char *) * words + 1);
	if (!arr || !c)
		return (0);
	while (arr[i] != '\0' && words + 1 > 0)
	{
		arr[i] = make_substr(next_word(s, c), c);
		if (!arr[i])
			while (i < words)
			{
				free(arr[i]);
				i++;
			}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
/*
int main()
{
	char **arr;
	char const *s = "xlemonxade";
	char c = 'x';
	int	i;
	i = 0;
	arr = ft_split(s, c);
	while (i < 3)
	{
		printf("%s\n", arr[i]);
		i++;
	}
	
*/
	

		

