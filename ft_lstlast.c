t_list *ft_lstlast(t_list *lst)
{
	t_list	*temp;
	//if !lst, then NULL?
	while (temp->next != NULL)
	{
		temp = temp->next;		
	}
	return (temp);
}
