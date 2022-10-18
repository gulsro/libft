/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 17:40:10 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/18 17:51:54 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_itoa(int n)
{
	char *s;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	if (n < 0)
		sign = -1;
	if (n > 9)

}
