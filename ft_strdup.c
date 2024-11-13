#include "libft.h"
#include <stdlib.h>
char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len_str;
	size_t	i;

	i = 0;
	len_str = ft_strlen(s1);
	str = (char *) malloc(len_str + 1);
	if (str == NULL)
		return (NULL);
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
