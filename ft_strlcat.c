
//#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	result;
	size_t	dst_len;
	size_t	src_len;

	src_len = strlen(src);
	dst_len = strlen(dst);
	i = 0;
	j = dst_len;
	if (dst_len == 0 || src_len == 0)
			return (dst_len + dst_len);
	if (dstsize > (dst_len + strlen(src)))
		while (dst && src)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		result = strlen(dst);
		return (result);
}
int main ()
{
	char dst[35] = "banana";
	const char src[] = "lemonade";
	size_t	dstsize = 35;

	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	printf("%lu\n", strlcat(dst, src, dstsize));

}


