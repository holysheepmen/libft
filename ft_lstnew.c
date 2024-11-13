#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*newcontent;
	
	newcontent = malloc(sizeof(t_list));
	if (!newcontent)
		return (NULL);
	newcontent -> content = content;
	newcontent -> next = NULL;
	return (newcontent);
}
