#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*tmp; //besoin sinon ça del current
	
	current = *lst;
	while (current != NULL)
	{
		tmp = current;
		current = current -> next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
