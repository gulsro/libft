/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 15:33:17 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/24 15:48:43 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static	int	char_in_s1(char const *s1, char c)
{
	int	i;
	
	i = 0;
	while (*s1)
	{
		if (s1[i] == c)
			return (1);
	}
	return (0);
}

static	char	*position_index(char const *s1, char c)
{
	int	i;

	i = 0;
	while (*s1)
	{
		if (s1[i] != c)
			i++;	
	}
	return ((char *)(s1 + i));	
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len;
	char	*s2;
	
	i = 0;
	j = 0;
	len = strlen(s1);
	s2 = (char *)malloc(len + 1);
	while (char_in_s1(s1, set[i]))
	{
		i++;
		s2 = position_index(s1, set[i]);
	}
	return (s2);
}

int main()
{
	char const s1[] = "lemonade";
	char const set[] = "me";
	printf("%s\n", ft_strtrim(s1, set));
}
