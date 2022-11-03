int ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*temp;

	count = 0;
	temp = lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
