#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	to_find;
	unsigned char	*str;
	size_t i;

	i = 0;
	str = (unsigned char *)s;
	to_find = (unsigned char) c;
	while (i < n)
	{
		if(str[i] == to_find)
			return((void *)&str[i]);
		i++;
	}	
	return (NULL);
}
