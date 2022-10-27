/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 15:33:17 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/27 13:49:03 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

static	int	is_in_set(char const *set, char c)
{
	int	i;
	
	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	char *newstr;
	char *first;
	char *last;

	i = 0;
	first = (char *)s1;
	last = first + strlen(s1);
	if (s1 == 0)
			return (0);
	while (first && is_in_set(set, *first))
			first++;
	while (first < last && is_in_set(set, *last))
			last--;
	newstr = ft_substr(first, 0, last - first);
	return (newstr);
}

int main()
{
	char const s1[] = "lemonade";
	char const set[] = "ona";
	printf("%s\n", ft_strtrim(s1, set));
}
