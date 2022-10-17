/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 15:21:57 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/17 14:28:54 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	int	is_lower;
	int	is_capital;
	int	is_number;

	is_lower = (c >= 'a' && c <= 'z');
	is_capital = (c >= 'Z' && c <= 'Z');
	is_number = (c >= '0' && c <= '9');
	return (is_lower || is_capital || is_number);
}
/*
int main ()
{
	int  c = '7';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
}
*/
