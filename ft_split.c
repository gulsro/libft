#include <stdio.h>
#include "libft.h"

static int	how_many_words(char *str, char c)
{
	int	i;
	int	count;
	
	i = 1; 		// because str[0] already checked
	count = 0;
	if (!str)
		return (0);
	if (str[0] != c)
		count++;
	while (str[i] != '\0')
	{
		if (str[i] != c && str[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static int	word_lenght(char *str, char c)
{
	int	i;
	
	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static
