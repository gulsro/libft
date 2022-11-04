/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 13:00:00 by gozturk       #+#    #+#                 */
/*   Updated: 2022/11/04 15:17:26 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*new;

	new = lst;
	while (new)
	{
		f(new->content);
		new = new->next;
	}
}
