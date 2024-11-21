/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 01:54:48 by opoure            #+#    #+#             */
/*   Updated: 2024/11/21 11:56:01 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charinset(const char *set, char c)
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

static char	*new_str(const char *s1, size_t start, size_t size)
{
	char	*str;
	size_t	i;

	str = malloc(size + 1 * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	start;
	int	i;
	int	end;

	if (!s1 || s1[0] == '\0')
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	i = (ft_strlen(s1) - 1);
	while (charinset((char *)set, s1[i]) == 1 && i >= 0)
		i--;
	if (i < 0)
		return (ft_strdup(""));
	end = i;
	i = 0;
	while (charinset((char *)set, s1[i]) == 1 && s1[i])
		i++;
	start = i;
	str = new_str(s1, start, (end - start) + 1);
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
