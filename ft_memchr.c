/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:29:35 by opoure            #+#    #+#             */
/*   Updated: 2024/11/23 15:28:14 by opoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	to_find;
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	to_find = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == to_find)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	void	*expected = ft_memchr("blaobla", 'o', 4);
	void	*result = memchr("blaobla", 'o', 4);
	printf("%d\n", strcmp(expected, result));
	if (ft_memchr("blaobla", 'o', 2) != memchr("blaobla", 'o', 2))
		printf("limites fail\n");
	if (ft_memchr("bla\0o", 'o', 6) != memchr("bla\0o", 'o', 6))
		printf("0 fail\n");
	if (ft_memchr("", 'o', 0) != memchr("", 'o', 0))
		printf("empty fail");
	return (0);
}
*/
