/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 17:11:38 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/12 19:20:02 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	
	d = dst;
	s = src;
	if (!d && !s)
			return (0);
	if (d < s)
			memcmp(d, s, len);
	else if (d > s)
			while (len)
			{
				d[len - 1] = s[len - 1];
				len--;
			}
				return (dst);

}
int main()
{
    size_t n = 3;
    char dst[8] = "";
    const char src[] = "";

    printf("%s\n", ft_memmove(dst, src, n));
    printf("%s\n", memmove(dst, src, n));
}