/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 11:19:46 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/24 15:52:26 by gozturk       ########   odam.nl         */
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
	if (dstsize < dst_len + 1)
		return (dstsize + src_len); // why not DSTLEN + srclen?

	if (dstsize > dst_len + 1)
	{
		while (*src && i < (dstsize - dst_len - 1)) 
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
		return (dst_len + src_len);
	}
	return (0);
}
/*
int main ()
{
	char dst[10] = "b";
	const char src[] = "lemo nade strawberrymilkshake";
	size_t	dstsize = 5;

	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	printf("%s\n", dst);
	char ds[15] = "b";
	printf("%lu\n", strlcat(ds, src, dstsize));
	printf("%s\n", ds);

}
*/
