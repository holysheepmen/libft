#include "libft.h"
char	f(unsigned int i, char c);

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	unsigned int i;
	if (!s || !f)
		return (NULL);
	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	f(unsigned int i, char c)
{
	char r;
	r = c + 1;
	return (r);
}

#include <stdio.h>
int	main(void)
{
	char *str = "";
	char	*src;
	src = ft_strmapi(str, *f);
	printf("%s\n", src);
	return (0);
}
*/
