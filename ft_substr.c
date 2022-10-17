/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 15:04:47 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/17 14:21:15 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;
	size_t  s_len;

	s_len = strlen(s);
    i = 0;
	if (start > s_len)
			return (strdup(""));
	if (start + len > s_len)
			len = s_len - start;
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
/*
int main()
{
    char const *s = "lemonade";
    unsigned int start = 10;
    size_t len = 10;

    printf("%s\n", ft_substr(s, start, len));
}
*/
