#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    void *Mem;

    Mem = malloc(count * size);
    if (!Mem)
        return (NULL);
    else 
        ft_bzero(Mem, (count * size));
    return (Mem);	
}
/*
int	main(void)
{
	size_t	count = 3;
	size_t	size = -5;
	void	*Mem;
	Mem = ft_calloc (count, size);
	return (0);
}
*/
