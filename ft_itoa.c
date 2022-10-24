/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 17:40:10 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/24 15:33:54 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
static	int	int_len(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count = 1;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
char	*ft_itoa(int n)
{
	int	len;
	int	numb;
	char	*s;

	numb = n;	
	len = int_len(n);
	if (n < 0)
		numb = n * -1;
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	if (n == -2147483648)
		memcpy(s, "-2147483648", 12 );		//	s = "-2147483648"
	while (len >= 1)
	{
		s[len - 1] = numb % 10 + '0';
		if (numb >= 10)
			numb /= 10;
		len--;
	}
	len = int_len(n);
	s[len] = '\0';
	if (n < 0)
		s[0] = '-';
	return (s);
}
/*
int main()
{
	int n = -2147483648;
	printf("%s\n", ft_itoa(n));
}
*/
