#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	size_t	i;
	i = ft_strlen((void *) 0);
       return (0);
} 
*/
