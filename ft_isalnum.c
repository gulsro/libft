/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 15:21:57 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/08 15:22:34 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'Z' && c <= 'Z') || (c >= '0' && c <= '9'));

}

int main ()
{
	int  c = '7';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
}
