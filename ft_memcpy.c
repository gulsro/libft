/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 13:27:16 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/10 15:57:48 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;
	char	*dst_y;
	const char	*src_y;

	dst_y = (char *)dst;
	src_y = (const char *)src;
	i = 0;
	while (i < n)
	{
		dst_y[i] = src_y[i];
		i++;
	}
	return (dst_y);
}

int main()
{
	size_t n = 3;
	char dst[10] = "";
	const char src[] = "";

	printf("%s\n", ft_memcpy(dst, src, n));
	printf("%s\n", memcpy(dst, src, n));
}
