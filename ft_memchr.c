/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 18:29:28 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/17 14:18:18 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*ptr;

	ptr = s; 
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (const unsigned char) c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
        const unsigned char s[] = "lemonade";
        int c = 'n';
		size_t n = 3;
        printf("%s\n", ft_memchr(s, c, n));
        printf("%s\n", memchr(s, c, n));
}
*/
