/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 18:29:28 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/10 18:56:53 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*s;

	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
		{
			return ((unsigned char *)s + i);
		}
		i++;
	}
	return (0);
}

int main()
{
        const unsigned char s[] = "banana";
        int c = 'e';
		size_t n = 7;
        printf("%s\n", ft_memchr(s, c, n));
        printf("%s\n", memchr(s, c, n));
}
