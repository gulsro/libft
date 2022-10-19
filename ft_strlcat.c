
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
	
// CHECK THE MANUAL AGAIN
	while (dstsize >= src_len + dst_len + 1)
	{
		if (dst[j] == 0 && src[i] == 0)
			return (dst_len + src_len);
		while (dst[j] && src[i])
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
		result = strlen(dst);
		return (result);
	}
}
int main ()
{
	char dst[15] = "banana";
	const char src[] = "lemonade";
	size_t	dstsize = 5;

	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	printf("%s\n", dst);
	char ds[15] = "banana";
	printf("%lu\n", strlcat(ds, src, dstsize));
	printf("%s\n", ds);

}


