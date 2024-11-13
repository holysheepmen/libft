#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	
	current = *lst;
	if (*lst == NULL) // current marche pas car on modifie dircetment la liste
	{
		*lst = new;
		new -> next = NULL;
       		return;
	}
	while ((current -> next) != NULL)
		current = current -> next;
	current -> next = new; // là ça marche car on modifie la structure
}
