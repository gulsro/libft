/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 14:29:16 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/13 15:18:28 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
			return (ptr);
	memset(ptr, 'j', count * size);
	return (ptr);
	
}

int main()
{
	size_t size;
	size_t count;

	size = sizeof(int);
	count = 5;
	printf("%s\n", ft_calloc(count, size));
	printf("%s\n", calloc(count, size));

}
