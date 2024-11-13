#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;
	
	i = 0;
	y = 0;
	if (!str && !needle)
		return (NULL);
	if (needle[i] == '\0')
		return ((char *)str);
	while (i < len && str[i] != '\0')
	{
		while (str[i + y] == needle[y] && str[i + y] && i + y < len)
		{
			y++;
			if (needle[y] == '\0')
				return ((char *)&str[i]);
		}
		y = 0;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	ft_strnstr(((void*)0), "fake", 0);
	return (0);
}
*/
