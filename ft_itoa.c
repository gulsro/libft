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
	//int	sign;
	int	count;
	int	len;
	int 	i;
	char	*s;
	
	//sign = 1;
	i = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	len = count + 1;
	s = malloc((len + 1) * sizeof(int));
	if (!s)
		return (0);
	if (n < 0)
		sign = -1;)
	while (s)
	{
		s[i] = n % 10 + '0';
		i++;
	}	
	s[i] = '\0';
	while (i < len / 2)
	{
		s[i] = s[len - 1];
		i++;
		len--;
	}	
	return (s);
}
int main()
{
	int n = 65;
	printf("%s\n", ft_itoa(n));
}
