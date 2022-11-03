/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 14:01:56 by gozturk       #+#    #+#                 */
/*   Updated: 2022/11/03 14:56:41 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		s1_len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	s1_len = ft_strlen(s1) + 1;
	ptr = malloc(s1_len + ft_strlen(s2) + 1);
	if (!ptr)
		return (0);
	while (i < s1_len)
	{	
		ptr[i] = s1[i];
		i++;
	}
	while (i < s1_len + ft_strlen(s2) + 1)
	{
		ptr[i - 1] = s2[j];
		i++;
		j++;
	}
	return (ptr);
}
/*
int main()
{
	char const s1[] = "lemonade";
	char const s2[] = "banana";

	printf("%s\n", ft_strjoin(s1, s2));
}
*/
