/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/25 15:46:31 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/25 16:24:55 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	len = strlen(s);
	i = 0;
	str = malloc((len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		f(i, str[i]);
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
