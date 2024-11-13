#include "libft.h"

static char	**words(const char *str, char **result, char c);
static size_t	count_words(const char *str, char c);

static size_t	count_words(const char *str, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
				count++;
		i++;
	}
	return (count);
}

static char	**words(const char *str, char **result, char c)
{
	size_t	count;
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	y; //copie

	i = 0;
	count = 0;
	y = 0; //copie
	while (str[i] != '\0' && (count < count_words(str, c)))
	{
		if (str[i] != c)
		{
			start = i;
			while (!(str[i + 1] == c || str[i + 1] == '\0'))
			       i++;
			end = i;
			result[count] = malloc(sizeof(char) * ((end - start) + 1));
				if (!result[count])
					return (NULL);
			// copie
			while (start <= end)
			{
				result[count][y++] = str[start++];
			}
			count++;
			y = 0; // copie
		}
		i++;
	}
	return (result);	
}
	
char	**ft_split(const char *s, char c)
{
	char	**result;
	int	size;
	if (!s)
		return (NULL);
	size = count_words(s,c) + 1;
	result = malloc(sizeof(char *) * size);
	if (!result)
		return (NULL);
	result = words(s, result, c);
	return (result);
}

#include <stdio.h>
int	main(void)
{
	char **result;
	char *string = "hello";
	int 	i = 25;
	int	y = 0;	

	result = ft_split(string, ' ');
	while(y < i)
	{
		printf("le mot n°%d est %s\n", y, result[y]);
		free(result[y]);
		y++;
	}
	return(0);
}
