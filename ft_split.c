/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:33:25 by opoure            #+#    #+#             */
/*   Updated: 2024/11/21 13:39:14 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**words(const char *str, char **result, char c);
static size_t	count_words(const char *str, char c);
static char	*copy_word(const char *str, int start, int end);

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

static void	free_result(char **result, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	**words(const char *str, char **result, char c)
{
	size_t	count;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	count = 0;
	while (str[i] != '\0' && (count < count_words(str, c)))
	{
		if (str[i] != c)
		{
			start = i;
			while (!(str[i + 1] == c || str[i + 1] == '\0'))
				i++;
			end = i + 1;
			result[count] = copy_word(str, start, end);
			if (!result[count])
			{
				free_result(result, count);
				return (NULL);
			}
		}
		i++;
	}
	return (result);
}

static char	*copy_word(const char *str, int start, int end)
{
	char	*word;
	int	i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start <= end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int	size;

	if (!s)
		return (NULL);
	size = count_words(s, c);
	result = malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (NULL);
	result = words(s, result, c);
	result[size] = NULL;
	return (result);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char **result;
	char *string = "\0aa\0bbb";
	char **expected = ((char*[3]){"aa", "bbb", NULL});
	int y = 0;

	result = ft_split(string, '\0');
	while (*expected)
	{
		printf("%d\n",y);
		y++;	
		if (strcmp(*expected, *result) != 0)
		{
			printf("%d\n", strcmp(*expected,*result));
			printf("womp womp\n");
			return (1);
		}
		expected++;
		result++;
	}
	return(0);
}
*/
