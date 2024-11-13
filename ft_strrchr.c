#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;
	char	to_find;
	char	*result;

	to_find = (char)c;
	i = 0; 
	result = NULL;
	while(str[i])
	{
		if(str[i] == to_find)
			result = (char *)&str[i];
		i++;
	}
	if (to_find == '\0')
		result = (char *)&str[i];
	return(result);
}
