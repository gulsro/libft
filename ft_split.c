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
		if (str[i] != c && str[i] != '\0')
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
	int	count; //***

	i = 0;
	count = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

static char *make_substr(const char *str, char c) 
{
	char *sub;
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (str[i] == c)
		i++;
	len = word_length(str + i, c);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	while (str[i] != '\0' && str[i] != c)
	{
		sub[j] = str[i];
		j++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

static void	free_array(char **arr, int i)
{
	//int	i;

	//i = 0;
	while (i)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

char **ft_split(char const *s, char c)
{
	char **arr;
	int	i;
	int	words;
	int	arr_i;

	i = 0;
	arr_i = 0;
	if (!s)
		return (0);
	words = how_many_words(s, c);
//	printf("\nwords=%d\n",words);
	arr = (char**)malloc(sizeof(char *) * words + 1);
	if (!arr)
		return (0);
	while (s[i] != '\0' && arr_i < words) 
	{
		while (s[i] == c)
			i++;
		arr[arr_i] = make_substr(s + i, c); 
		if (!arr[arr_i])
			free_array(arr, arr_i);
		i = i + word_length(s + i, c);
		arr_i++;
	}
	arr[arr_i] = NULL;
	return (arr);
}

/*
int main()
{
	char **arr;
	char const *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	char c = ' ';
	int	i;
	i = 0;
	arr = ft_split("  hell o!", ' ');
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	printf("%d\n", i);
}
*/
