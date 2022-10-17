/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   my_ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 16:35:41 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/14 16:31:33 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*my_ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;

	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
			return (NULL);
	while (len > 0)
	{
		sub[i] = s[start];
		i++;
		start++;
		len--;
	}
	return (sub);
}

int main()
{
	char const *s = "banana";
	unsigned int start = 6;
	size_t len = 3;

	printf("%s\n", ft_substr(s, start, len));
}
