/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 15:43:31 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/08 15:49:13 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	return ((c >= 32) && (c <= 126));
}
int main ()
{
    int  c = 43;
    printf("%d\n", ft_isprint(c));
    printf("%d\n", isprint(c));
}
