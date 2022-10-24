/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 15:33:17 by gozturk       #+#    #+#                 */
/*   Updated: 2022/10/24 15:48:43 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len;
	char	*ptr;

	len = strlen(s1);
	ptr = malloc(len + 1);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		if (set[i] != s1[j] && set[i] != '\0')
		{	
			i++;
		}
		i = 0;
		j++;	
		ptr[i] = s1[i];
		
		if (set[i] == s1[len -1])
			i++;
			len--;
		ptr[len - 1] = set[len];	
	}
	return (*ptr);
}
