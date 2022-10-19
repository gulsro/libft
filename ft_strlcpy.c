/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 14:53:39 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/19 16:55:05 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	i = 0;
	src_len = strlen(src);
	if (dstsize < src_len + 1)
	{
		while (dst[i] != '\0' && src[i] != '\0' && i < (dstsize -1))
        {
            dst[i] = src[i];
            i++;
        }
		dst[i] = '\0';
		return (src_len);
	}
	if (dstsize > src_len + 1)
	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (src_len);
}
int main ()
{
    char dst[] = "";
    const char src[] = "lemonade";
    size_t  dstsize = 7;

    printf("%lu\n", ft_strlcpy(dst, src, dstsize));
    printf("%s\n", dst);
    char ds[15] = "banana";
    printf("%lu\n", strlcpy(ds, src, dstsize));
    printf("%s\n", ds);
}
