#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	to_find;
	unsigned int	i;

	i = 0;
	to_find = (char) c;
	while (str[i])
	{
		if(str[i] == to_find)
			return ((char *)&str[i]);
		i++;
	}
	if (to_find == '\0')
		return((char *)&str[i]);
	return (NULL);
}
