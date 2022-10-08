/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   first_shot.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:10:06 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/06 16:10:36 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int ft_isalpha(int c)
{
	int	is_lower;
	int	is_capital;

	is_lower = (c >= 'a' && c <= 'z');
	is_capital = (c >= 'A' && c <= 'Z');
   	
	return (is_lower || is_capital);
}

int main()
{
	int c = 75;
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
}
