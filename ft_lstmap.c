/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 17:13:34 by gozturk       #+#    #+#                 */
/*   Updated: 2022/11/04 18:07:47 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_head;
	
	temp = lst;
	new_head = NULL;
	if (!lst)
		return (0);
	while (temp)
	{
		content = f(temp->content);
		new_head = ft_lstnew(content);
		
		temp->next = next;
		del;
		temp = temp->next;
	}
	
}
