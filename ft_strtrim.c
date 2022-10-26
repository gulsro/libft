/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 15:33:17 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/26 14:57:48 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	
}

int main()
{
	char const s1[] = "lemonade";
	char const set[] = "me";
	printf("%s\n", ft_strtrim(s1, set));
}
