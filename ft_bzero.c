/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 15:19:42 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/13 15:59:04 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s_1;

	s_1 = s;
	i = 0;
	while (i < n)
	{
		s_1[i] = 0;
		i++;		
	}
}

int main()
{
	size_t  n = 9;
    char *s = "";

	printf("%p\n", ft_bzero(s, n));
	printf("%s\n", bzero(s, n));
}
