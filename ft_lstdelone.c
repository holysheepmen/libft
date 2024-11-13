#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst -> content); //on delete le content de la liste
	free(lst);
}
