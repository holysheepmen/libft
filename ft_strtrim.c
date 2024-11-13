#include "libft.h"

static int	trim(char *set, char c)
{
	size_t	in;

	in = 0;
	while (set[in] != '\0')
	{
		if (c == set[in])
			return (1);
		in++;
	}
	return (0);
}
/*
static int	check(char *s1, char *set)
{
	size_t	index;
	size_t	result;
	
	index = 0;
	result = 0;
	while (s1[index] != '\0')
	{
		if (trim(set, s1[index]) == 0)
		{
			result = 1;
		}
		index++;
	}
	return (result);
}
*/

char	*ft_strtrim(const char *s1,const char *set)
{
	char *str;
	int	i;
	size_t	start;
	int	end;
	size_t	j;

	if (!set)
		return ((char *)s1);
	if (!s1 || s1[0] == '\0')
		return (ft_strdup("")); // empty string ou ft_strdup
/*	if (check((char *)s1, (char *)set) == 1)
	{
		str = malloc(1 *sizeof(char));
		str[0] = '\0';
		return (str);
	} */
	i = (ft_strlen(s1) - 1);// pour correspondre à l'index
	while (trim((char *)set, s1[i]) == 1 && i >= 0)
		i--;
	if (i < 0)
		return (ft_strdup("")); // empty string
	end = i;
	i = 0;
	while (trim((char *)set,s1[i]) == 1 && s1[i])
		i++;
	start = i;
	str = malloc(((end - start) + 2) * sizeof(char)); // rajoute +1 pour le \0 et un autre +1 pooouuur ????
	if (!str)
		return (NULL);
	j = 0;
	while (i < (end + 1)) // car -1 sur ligne 52
	{
		str[j] = s1[start + j];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n",ft_strtrim("   ddddOxana    sssdddds", "sd "));
	return (0);
}
*/
