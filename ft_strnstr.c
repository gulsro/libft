/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 16:36:34 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/25 17:47:43 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_n;
	size_t	len_h;

	len_h = strlen(haystack);
	len_n = strlen(needle);
	i = 0;
	if (len_n == 0) 
			return (char *)(haystack);
	if (len_h < len_n)
			return (0);
	while (i < len)
	{
		if (memcmp(haystack, needle, len) == 0)
		{
			return (char *)(haystack + i);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	const char haystack[] = "lemonade";
	const char needle[] = "on";
	size_t len = 3;
	printf("%s\n", ft_strnstr(haystack, needle, len));
	printf("%s\n", strnstr(haystack, needle, len));
}
*/
