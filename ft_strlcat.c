/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 11:19:46 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/26 17:53:22 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	src_len = strlen(src);
	dst_len = strlen(dst);
	i = 0;
	j = dst_len;
	if (dstsize > dst_len)
	{
		while (src[i]  && i < (dstsize - dst_len - 1)) 
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
		return (dst_len + src_len);
	}
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	return (0);	
}
/*
int main ()
{
	char dst[15] = "aaaaaaaaaaqqq11";
	const char src[] = "lorem ipsum dolor sit amet";
	size_t	dstsize = 5;

	printf("me=%lu\n", ft_strlcat(dst, src, dstsize));
	printf("me=%s\n", dst);
	char ds[15] = "aaaaaaaaaaqqq11";
	printf("fn=%lu\n", strlcat(ds, src, dstsize));
	printf("fn=%s\n", ds);
}
*/
