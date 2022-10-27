/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 15:33:17 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/27 16:41:45 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*newstr;
	char	*temp;
	
	start = 0;
	temp = (char *)s1;
	end = strlen(temp) - 1;
	if (!s1)
			return (0);
	if (!set)
			return (temp);
	while (temp[start] && strchr(set, temp[start]))
			start++;
	while (temp[end] && strchr(set, temp[end]))
			end--;
	newstr = ft_substr(temp, start, (end - start + 1));
	return (newstr);
}
/*
int main()
{
	char const s1[] = "";
	char const set[] = "";
	printf("%s\n", ft_strtrim(s1, set));
}
*/
